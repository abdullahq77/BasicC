#include <stdio.h>
#include <cs50.h>

// name printer
int main(void)
    {
        // asks for name
        string name = get_string("whats your name? ");
        // then returns "hello (whatever name you put in)"
        printf("hello, %s\n", name);
    } 