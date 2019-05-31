@echo off
:: Batch file for building/testing on AppVeyor

echo %APPVEYOR_BUILD_FOLDER%

PATH C:\%MSYS2_DIR%\%MSYSTEM%\bin;C:\%MSYS2_DIR%\usr\bin;%PATH%

bash -lc "aclocal"
bash -lc "autoconf"
bash -lc "automake --add-missing"
bash -lc "./configure --prefix=`pwd`/build"
bash -lc "make"
bash -lc "make distcheck"
