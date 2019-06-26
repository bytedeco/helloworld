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
 * File:   helloworld.c
 * Author: Matteo Di Giovinazzo
 *
 * Created on May 9, 2019, 12:10 PM
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <time.h>
#include <limits.h>
#include "helloworld.h"

__attribute__ ((constructor)) void init(void) {
    srand(time(NULL));
    setbuf(stdout, NULL);
    printf("Loaded helloworld library\n");
}

__attribute__ ((destructor)) void fini(void) {
    printf("Unloaded helloworld library\n");
}



#define HELLO_WORLD "Hello World!"

char random_char(char min, char max) {
    return min + (char) (rand() / (double) (RAND_MAX) * (max - min + 1));
}

wchar_t random_wchar_t(wchar_t min, wchar_t max) {
    return min + (wchar_t) (rand() / (double) (RAND_MAX) * (max - min + 1));
}

short int random_short_int(short int min, short int max) {
    return min + (short int) (rand() / (double) (RAND_MAX) * (max - min + 1));
}

int random_int(int min, int max) {
    return min + (int) (rand() / (double) (RAND_MAX) * (max - min + 1));
}

long long int random_long_long_int(long long int min, long long int max) {
    return min + (long long int) (rand() / (double) (RAND_MAX) * (max - min + 1));
}


bool getBool() {
    return rand() > RAND_MAX / 2 ? true : false;
}

void printBool(bool value) {
    printf("C boolean = %s\n", value ? "true" : "false");
}


char getByte() {
    return random_char(CHAR_MIN, CHAR_MAX);
}

void printByte(char value) {
    printf("C byte = %d\n", value);
}


wchar_t getChar() {
    return random_wchar_t(WCHAR_MIN, WCHAR_MAX);
}

void printChar(wchar_t value) {
    printf("C char = \\u%04X\n", value);
}


short int getShort() {
    return random_short_int(SHRT_MIN, SHRT_MAX);
}

void printShort(short int value) {
    printf("C short = %d\n", value);
}


int getInt() {
    return random_int(INT_MIN, INT_MAX);
}

void printInt(int value) {
    printf("C int %d\n", value);
}


long long int getLong() {
    return random_long_long_int(LONG_MIN, LONG_MAX);
}

void printLong(long long int value) {
    printf("C long = %lld\n", value);
}


char * getUtf8String() {
    char * tmp = u8"Hello UTF-8 z\u00df\u6c34\U0001F34C string!";
    char * str = (char *) malloc(sizeof(char) * (strlen(tmp) + 1));
    strcpy(str, tmp);
    return str;
}

void printUtf8String(char * value) {
    printf("C UTF-8 String = %s\n", value);
}


struct Person getPerson() {
    struct Person p;
    char *firstname = "John";
    char *lastname = "Doe";
    p.firstname = (char *) malloc( sizeof(char) * (strlen(firstname) + 1));
    p.lastname = (char *) malloc( sizeof(char) * (strlen(lastname) + 1));
    strcpy(p.firstname, firstname);
    strcpy(p.lastname, lastname);
    return p;
}

void printPerson(struct Person p) {
    printf("Person.firstname = %s\n", p.firstname);
    printf("Person.lastname  = %s\n", p.lastname);
}


struct Person *getPersonPtr() {
    struct Person *pp = (struct Person *) malloc(sizeof(struct Person));
    char *firstname = "John";
    char *lastname = "Doe";
    pp->firstname = (char *) malloc( sizeof(char) * (strlen(firstname) + 1));
    pp->lastname = (char *) malloc( sizeof(char) * (strlen(lastname) + 1));
    strcpy(pp->firstname, firstname);
    strcpy(pp->lastname, lastname);
    return pp;
}

void printPersonPtr(struct Person* pp) {
    printf("Person->firstname = %s\n", pp->firstname);
    printf("Person->lastname  = %s\n", pp->lastname);
}


PersonType getPersonType() {
    PersonType pt;
    char *firstname = "John";
    char *lastname = "Doe";
    pt.firstname = (char *) malloc(sizeof(char) * (strlen(firstname) + 1));
    pt.lastname = (char *) malloc(sizeof(char) * (strlen(lastname) + 1));
    strcpy(pt.firstname, firstname);
    strcpy(pt.lastname, lastname);
    return pt;
}

void printPersonType(PersonType pt) {
    printf("PersonType.firstname = %s\n", pt.firstname);
    printf("PersonType.lastname  = %s\n", pt.lastname);
}


PersonTypePtr getPersonTypePtr() {
    PersonTypePtr ptp = (PersonTypePtr) malloc(sizeof(PersonType));
    char *firstname = "John";
    char *lastname = "Doe";
    ptp->firstname = (char *) malloc( sizeof(char) * (strlen(firstname) + 1));
    ptp->lastname = (char *) malloc( sizeof(char) * (strlen(lastname) + 1));
    strcpy(ptp->firstname, firstname);
    strcpy(ptp->lastname, lastname);
    return ptp;
}

void printPersonTypePtr(PersonTypePtr ptp) {
    printf("PersonTypePtr->firstname = %s\n", ptp->firstname);
    printf("PersonTypePtr->lastname  = %s\n", ptp->lastname);
}
