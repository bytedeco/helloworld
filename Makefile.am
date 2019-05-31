AM_CFLAGS = -g -Wall -fPIC


bin_PROGRAMS = helloworld_test
helloworld_test_SOURCES = tests/helloworld_test.c
helloworld_test_LDADD = libhelloworld.la

lib_LTLIBRARIES = libhelloworld.la
libhelloworld_la_SOURCES = src/helloworld.c src/helloworld.h
libhelloworld_la_CFLAGS = $(AM_CFLAGS)
libhelloworld_la_LDFLAGS = -no-undefined

dist_doc_DATA = README
