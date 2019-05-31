#!/bin/bash

# working dir is /home/appveyor
echo ${APPVEYOR_BUILD_FOLDER}

CYGPATH_APPVEYOR_BUILD_FOLDER=`cygpath ${APPVEYOR_BUILD_FOLDER}`
cd $CYGPATH_APPVEYOR_BUILD_FOLDER
pwd

ls -al

PATH=/c/msys64/usr/bin:$PATH

aclocal
autoconf
automake --add-missing
./configure --prefix=`pwd`/build
make
make distcheck
