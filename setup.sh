#!/bin/bash

sudo apt update -y
sudo apt install -y build-essential curl git
curl https://gist.githubusercontent.com/junkpiano/49f3f34e1db1f6a1a5ca11b10c0945a6/raw/3cd24934db15242a76b4659abdfb9d52cc126043/cf.cpp > ./template.cpp

