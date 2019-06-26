[![Build Status](https://travis-ci.org/bytedeco/helloworld.svg?branch=master)](https://travis-ci.org/bytedeco/helloworld) 
[![Build status](https://ci.appveyor.com/api/projects/status/n7lrq75br6wd68mq?svg=true)](https://ci.appveyor.com/project/matteodg/helloworld)


# helloworld

A simple dynamic library used to show an example of how to write a preset for JavaCPP.

In the [helloworld](https://github.com/bytedeco/javacpp-presets/tree/helloworld/helloworld) branch of [bytedeco/javacpp-presets](https://github.com/bytedeco/javacpp-presets/) there is the helloworld preset to use helloworld library with JavaCPP.

# Example
```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <wchar.h>
#include <time.h>
#include <limits.h>
#include "../src/helloworld.h"

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
    char* a = getUtf8String();
    printUtf8String(a);

    struct Person p = getPerson();
    printPerson(p);

    struct Person *pp = getPersonPtr();
    printPersonPtr(pp);

    PersonType pt = getPersonType();
    printPersonType(pt);

    PersonTypePtr ptp = getPersonTypePtr();
    printPersonTypePtr(ptp);

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
    printUtf8String(u8"Hello UTF-8 z\u00df\u6c34\U0001F34C string!");

    struct Person p1;
    p1.firstname = "John";
    p1.lastname = "Doe";
    printPerson(p1);

    struct Person *pp1 = (struct Person *) malloc(sizeof(struct Person));
    pp1->firstname = "John";
    pp1->lastname = "Doe";
    printPersonPtr(pp1);

    PersonType pt1;
    pt1.firstname = "John";
    pt1.lastname = "Doe";
    printPersonType(pt1);

    PersonTypePtr ptr1 = (PersonTypePtr) malloc(sizeof(PersonType));
    ptr1->firstname = "John";
    ptr1->lastname = "Doe";
    printPersonTypePtr(ptr1);

    return (EXIT_SUCCESS);
}
```

