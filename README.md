[![Build Status](https://travis-ci.org/bytedeco/helloworld.svg?branch=master)](https://travis-ci.org/bytedeco/helloworld) 
[![Build status](https://ci.appveyor.com/api/projects/status/n7lrq75br6wd68mq?svg=true)](https://ci.appveyor.com/project/matteodg/helloworld)


# helloworld

A simple dynamic library used to show an example of how to write a preset for JavaCPP.

The [helloworld preset](https://github.com/bytedeco/javacpp-presets/tree/helloworld) shows some examples on how to build a preset using JavaCPP.

# Example
```c
#include <stdio.h>
#include <stdlib.h>
#include <helloworld.h>

int main(int argc, char** argv) {

    printf("READ -------------------------------------------------\n");
    bool bool_value = getBool();
    printBool(bool_value);
    char byte_value = getByte();
    printByte(byte_value);
    wchar_t c = getChar();
    printChar(c);
    short int s = getShort();
    printShort(s);
    int i = getInt();
    printInt(i);
    long l = getLong();
    printLong(l);
    char* a = getAsciiString();
    printAsciiString(a);
    wchar_t* u = getUnicodeString();
    printUnicodeString(u);

    printf("WRITE ------------------------------------------------\n");
    printBool(true);
    printBool(false);
    printByte(CHAR_MIN);
    printByte(CHAR_MAX);
    printChar(WCHAR_MIN);
    printChar(WCHAR_MAX);
    printShort(SHRT_MIN);
    printShort(SHRT_MAX);
    printInt(INT_MIN);
    printInt(INT_MAX);
    printLong(LONG_MIN);
    printLong(LONG_MAX);
    printAsciiString("Hello ASCII string!");
    printUnicodeString(L"Hello Unicode string!");

    return (EXIT_SUCCESS);
}
```

