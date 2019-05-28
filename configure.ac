AC_INIT([HelloWorld], [1.0], [matteodg@gmail.com], [https://github.com/matteodg/helloworld])
AM_INIT_AUTOMAKE([foreign subdir-objects])
AM_MAINTAINER_MODE([enable])

AC_PREREQ
AC_PROG_INSTALL
AC_PROG_MAKE_SET

AC_PROG_CC
AC_CHECK_HEADERS([stdio.h stdlib.h wchar.h time.h limits.h])
AC_CHECK_HEADER_STDBOOL

LT_INIT([shared disable-static])

AC_CONFIG_MACRO_DIRS([m4])

AC_OUTPUT(Makefile)
