#define HELLO_WORLD "Hello World!"

char * getHelloWorldMessage(void) {
    return HELLO_WORLD;
}

void printHelloWorldMessage(char * message) {
    printf("%s\n", message);
}

int getIntValue() {
    return 1234;
}

void printIntValue(int value) {
    printf("%d\n", value);
}
