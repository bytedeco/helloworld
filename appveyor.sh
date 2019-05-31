#!/bin/bash
export

echo $PATH

set PATH=/c/$MSYS2_DIR/$MSYSTEM/bin:/c/$MSYS2_DIR/usr/bin:$PATH

echo $PATH

aclocal
autoconf
automake --add-missing
./configure --prefix=`pwd`/build
make
make distcheck
