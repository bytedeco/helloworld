/*
 * Copyright 2019 Matteo Di Giovinazzo.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * File:   test.c
 * Author: Matteo Di Giovinazzo
 *
 * Created on May 23, 2019, 11:40 PM
 */

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
