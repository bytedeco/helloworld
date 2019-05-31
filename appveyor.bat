@echo on
:: Batch file for building/testing on AppVeyor

echo %cd%

cd %APPVEYOR_BUILD_FOLDER%
echo %cd%

PATH C:\%MSYS2_DIR%\%MSYSTEM%\bin;C:\%MSYS2_DIR%\usr\bin;%PATH%
echo %PATH%

bash -lc "aclocal"
bash -lc "autoconf"
bash -lc "automake --add-missing"
bash -lc "./configure --prefix=`pwd`/build"
bash -lc "make"
bash -lc "make distcheck"
