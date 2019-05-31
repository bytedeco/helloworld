#!/bin/bash

find -iname "aclocal*" /

pwd

ls -al

/c/msys64/usr/bin/pacman --noconfirm --ask 20 --sync --refresh --refresh --sysupgrade --sysupgrade

aclocal
autoconf
automake --add-missing
./configure --prefix=`pwd`/build
make
make distcheck
