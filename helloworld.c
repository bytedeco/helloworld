#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <wchar.h>
#include <time.h>

__attribute__((constructor)) void init(void) {
    srand (time(NULL));
    setbuf(stdout, NULL);
    printf("Loaded\n");
}
__attribute__((destructor))  void fini(void) {
    printf("Unloaded\n");
}



#define HELLO_WORLD "Hello World!"

char random_char(char min, char max) {
  return min + (char) (rand() / (double) (RAND_MAX + 1) * (max - min + 1));
}

wchar_t random_wchar_t(wchar_t min, wchar_t max) {
  return min + (wchar_t) (rand() / (double) (RAND_MAX + 1) * (max - min + 1));
}

short int random_short_int(short int min, short int max) {
  return min + (short int) (rand() / (double) (RAND_MAX + 1) * (max - min + 1));
}

int random_int(int min, int max) {
  return min + (int) (rand() / (double) (RAND_MAX + 1) * (max - min + 1));
}

long long int random_long_long_int(long long int min, long long int max) {
  return min + (long long int) (rand() / (double) (RAND_MAX + 1) * (max - min + 1));
}


bool getBool() {
    return rand() > RAND_MAX/2 ? true : false;
}

void printBool(bool value) {
    printf("C boolean = %s\n", value ? "true" : "false");
}


char getByte() {return random_char(CHAR_MIN, CHAR_MAX);}
void printByte(char value) {printf("C byte = %d\n", value);}

wchar_t getChar() {return random_wchar_t(WCHAR_MIN, WCHAR_MAX);}
void printChar(wchar_t value) {printf("C char = \\u%04X\n", value);}

short int getShort(){return random_short_int(SHRT_MIN, SHRT_MAX);}
void printShort(short int value) {printf("C short = %d\n", value);}

int getInt(){return random_int(INT_MIN, INT_MAX);}
void printInt(int value) {printf("C int %d\n", value);}

long long int getLong(){return random_long_long_int(LONG_MIN, LONG_MAX);}
void printLong(long long int value) {printf("C long = %lld\n", value);}

char * getAsciiString(void){return HELLO_WORLD;}
void printAsciiString(char * value) {printf("C AsciiString = %s\n", value);}

wchar_t * getUnicodeString(void){return "";}
void printUnicodeString(wchar_t * value) {printf("C UnicodeString = %s\n", value);}

