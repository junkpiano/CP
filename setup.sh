#!/bin/bash

sudo apt-get update -y\
    && sudo apt-get -y install --no-install-recommends apt-utils dialog 2>&1 \
    && sudo apt-get -y install git iproute2 procps lsb-release gdb\
    && sudo apt-get install -y sudo build-essential wget curl vim
