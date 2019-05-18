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

    char * getString(void);
    void printString(char * message);
}

#endif // helloworld_h__
