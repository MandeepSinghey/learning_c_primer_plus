/* strptr.c -- strings as pointers */

#include <stdio.h>

char *ptr = "space farers";
char car[10] = "Tata";

int main(void)
{
    //
    if (car == &car[0])
    {
        printf("Car is : %s\n", car);
        printf("Address at which starting of array pointed is %p\n", &car[0]);
    };
    // seonf character is a?
    if (car[1] == 'a')
    {
        printf("Car is : %s\n", car);
    };
    //pointer points to first charcacter  is that T?
    if (*car == 'T')
    {
        printf("Car is : %s\n", car);
    };
    printf("%s, %p, %c\n", "We", "are", *"space farers");
    printf("ptr STRING : %s\n", ptr);
    printf("ptr STRING points to first character of array:  %c\n", *ptr);

    return 0;
}