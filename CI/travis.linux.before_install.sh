#!/bin/bash
set -ev
sudo apt-add-repository ppa:ubuntu-sdk-team/ppa -y
sudo apt-add-repository ppa:kalakris/cmake -y
sudo apt-get update
pushd $HOME
git clone https://github.com/lloyd/yajl.git
pushd yajl
git checkout 2.1.0
popd
popd
curl -L https://github.com/zdevito/terra/releases/download/release-2015-07-21/terra-Linux-x86_64-36c35d9.zip > terra.zip
