#!/bin/bash

set PATH=/c/$MSYS2_DIR/$MSYSTEM/bin:/c/$MSYS2_DIR/usr/bin:$PATH

aclocal
autoconf
automake --add-missing
./configure --prefix=`pwd`/build
make
make distcheck
