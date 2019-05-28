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
 * File:   helloworld.h
 * Author: Matteo Di Giovinazzo
 *
 * Created on May 9, 2019, 12:10 PM
 */

#ifndef helloworld_h__
#define helloworld_h__

extern "C"
{
    bool getBool();
    void printBool(bool value);

    char getByte();
    void printByte(char value);

    wchar_t getChar();
    void printChar(wchar_t value);

    short int getShort();
    void printShort(short int value);

    int getInt();
    void printInt(int value);

    long long int getLong();
    void printLong(long long int value);

    char * getAsciiString(void);
    void printAsciiString(char * value);

    wchar_t * getUnicodeString(void);
    void printUnicodeString(wchar_t * value);
}

#endif // helloworld_h__