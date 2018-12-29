// addresses.c -- addresses of strings
#define MSG "I'm special."
#include <stdio.h>

int main()
{
    //array loaded with string msg and is created in dynamic location of memory
    char ar[] = MSG;
    //pointer to string msg
    const char *pt = MSG;

    printf("address of \"I'm special\": %p \n", "I'm special");
    printf(" address ar: %p\n", ar);
    printf(" address pt: %p\n", pt);
    printf(" address of MSG: %p\n", MSG);
    printf("address of \"I'm special\": %p \n", "I'm special");
    return 0;
}