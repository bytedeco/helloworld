#!/bin/bash

whereis aclocal

pwd

ls -al

aclocal
autoconf
automake --add-missing
./configure --prefix=`pwd`/build
make
make distcheck
