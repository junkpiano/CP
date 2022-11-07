FROM python:3.8

RUN apt-get update \
    && apt-get -y install --no-install-recommends apt-utils dialog 2>&1 \
    && apt-get -y install git iproute2 procps lsb-release gdb\
    && apt-get install -y sudo wget curl vim

RUN cd /tmp \
    && git clone https://github.com/atcoder/ac-library.git 

RUN pip3.8 install atcoder-tools

RUN mkdir -p /root/.atcodertools/template 
RUN mkdir -p /root/atcoder-workspace

RUN echo 'asub="atcoder-tools submit -f -u"'
RUN echo 'alias atest="g++ -Wfatal-errors --std=c++17 -I /tmp/ac-library main.cpp ; atcoder-tools test"' >> /root/.bashrc

RUN mkdir -p /root/.cftools/template
RUN echo 'alias cftest="g++ -Wfatal-errors --std=c++17 -I /tmp/ac-library a.cpp ; cf test"' >> /root/.bashrc

RUN echo 'alias agen="atcoder-tools gen --workspace /workspaces/cp/atcoder --without-login --template /root/.atcodertools/template/template.cpp"' >> /root/.bashrc
RUN echo 'alias agenlogin="atcoder-tools gen --workspace /workspaces/cp/atcoder --template /root/.atcodertools/template/template.cpp"' >> /root/.bashrc
RUN echo 'alias asub="atcoder-tools submit -u"' >> /root/.bashrc

RUN curl -s -S https://gist.githubusercontent.com/gghatano/1aab64239be88181d0fc91069c6fe9b4/raw/625a707e7b0c38777e5b8e9984871481243a8597/template.cpp >> /root/.atcodertools/template/template.cpp
RUN curl -s -S https://gist.githubusercontent.com/gghatano/1aab64239be88181d0fc91069c6fe9b4/raw/625a707e7b0c38777e5b8e9984871481243a8597/zzz_algorithm.cpp >> /root/atcoder-workspace/algorighm.cpp

# install codeforce tool
RUN curl -s -S -LO https://github.com/izlyforever/cf-tool/releases/download/v1.0.5/cf_v1.0.5_linux_64.zip
RUN unzip cf_v1.0.5_linux_64.zip
RUN mv cf /usr/local/bin/

RUN curl -s -S https://gist.githubusercontent.com/junkpiano/49f3f34e1db1f6a1a5ca11b10c0945a6/raw/bbde76a69c315f528dd5cdab95396224fb85bffb/cf.cpp >> /root/.cftools/template/template.cpp

CMD ["/bin/bash"]
