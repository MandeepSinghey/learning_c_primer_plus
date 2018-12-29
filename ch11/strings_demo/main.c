#include <stdio.h>

//string constants
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(void)
{
    //declare a char array
    char words[MAXLENGTH] = "I am a string in an array.";
    //declare a char pointer to hold string
    const char *pt1 = "Something is pointing at me.";

    puts("Here are some strings:");
    printf("String constant is : %s \n", MSG);
    printf("Array is : %s\n", words);
    printf("Ptr to array is : %s\n", pt1);
    //replace 8 char with p in words array
    words[8] = 'p';
    puts(words);
    return 0;
}