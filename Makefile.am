AM_CFLAGS = -g -Wall -fPIC
ACLOCAL_AMFLAGS = -I m4

bin_PROGRAMS = helloworld_test
helloworld_test_SOURCES = tests/helloworld_test.c src/helloworld.h
helloworld_test_LDADD = libhelloworld.la

lib_LTLIBRARIES = libhelloworld.la
libhelloworld_la_SOURCES = src/helloworld.c src/helloworld.h
libhelloworld_la_CFLAGS = $(AM_CFLAGS)
libhelloworld_la_LDFLAGS = -no-undefined

include_HEADERS = src/helloworld.h

dist_doc_DATA = README.md
