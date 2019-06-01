#!/bin/bash

CYGPATH_APPVEYOR_BUILD_FOLDER=`cygpath ${APPVEYOR_BUILD_FOLDER}`
cd $CYGPATH_APPVEYOR_BUILD_FOLDER

PATH=/c/msys64/usr/bin:$PATH

./autogen.sh
./configure --prefix=`pwd`/build
make distcheck
