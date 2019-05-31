#!/bin/bash

find / -iname "aclocal*"

pwd

ls -al

PATH=/c/msys64/usr/bin:$PATH

aclocal
autoconf
automake --add-missing
./configure --prefix=`pwd`/build
make
make distcheck
