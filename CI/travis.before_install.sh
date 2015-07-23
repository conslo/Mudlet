#!/bin/bash
if [ -z "${TRAVIS_OS_NAME}" ] || [ "${TRAVIS_OS_NAME}" = "linux" ]; then
  echo Before install on linux.
  ./CI/travis.linux.before_install.sh;
fi
if [ "${TRAVIS_OS_NAME}" = "osx" ]; then
  echo Before install on OSX.
  ./CI/travis.osx.before_install.sh;
fi

unzip terra.zip -d terra
pushd terra
for d in *;do mv $d/* .;rm -rf $d;done
popd
