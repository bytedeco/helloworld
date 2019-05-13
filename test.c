#include <stdio.h>
#include "helloworld.h"

int main(void)
{
    puts(getHelloWorldMessage());
    printHelloWorldMessage("Hello world!");
    return 0;
}
