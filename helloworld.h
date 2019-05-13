#ifndef helloworld_h__
#define helloworld_h__

extern "C"
{
    char * getHelloWorldMessage(void);

    void printHelloWorldMessage(char * message);

    int getIntValue();

    void printIntValue(int value);
}

#endif // helloworld_h__
