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
#include <stdlib.h>

/*
 * Simple C Test Suite
 */

void test1() {
    printf("test test 1\n");
}

void test2() {
    printf("test test 2\n");
    printf("%%TEST_FAILED%% time=0 testname=test2 (test) message=error message sample\n");
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% test\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%% test1 (test)\n");
    test1();
    printf("%%TEST_FINISHED%% time=0 test1 (test) \n");

    printf("%%TEST_STARTED%% test2 (test)\n");
    test2();
    printf("%%TEST_FINISHED%% time=0 test2 (test) \n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
