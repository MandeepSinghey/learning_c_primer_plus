// arrchar.c -- array of pointers, array of strings
#include <stdio.h>

//size of each string
#define SIZE 40

//number of items in array
#define ITEMS 5
/*
Below  mytalents and yourtalents are much alike. Each represents five strings. 

But there are differences, too. 

The mytalents array is an array of five pointers, taking up 40 bytes on our system. 
But yourtalents is an array of five arrays, each of 40 char values, occupying 200 bytes on our system. 


The pointers in mytalents point to the locations of the string literals used for initialization, 
which are stored in static memory.

The arrays in yourtalents , however, contain copies of the string literals, so each string is
stored twice. Furthermore, the allocation of memory in the arrays is inefficient, for each
element of yourtalents has to be the same size, and that size has to be at least large enough
to hold the longest string.

The upshot is that, if you want to use an array to represent a bunch of strings to be displayed,
an array of pointers is more efficient than an array of character arrays. 

There is, however, a catch. 

NOTE: Because the pointers in mytalents point to string literals, these strings shouldn’t be
altered. 

The contents of yourtalents , however, can be changed. 

NOTE:So if you want to alter strings or set aside space for string input, don’t use pointers to string literals.
*/
int main(void)
{
    //declare a pointer char array
    const char *p_mytalents[ITEMS] = {"Adding numbers swiftly",
                                      "Multiplying accurately", "Stashing data",
                                      "Following instructions to the letter",
                                      "Understanding the C language"};

    char *p_fruit[5] = {"Apple",
                        "Orange",
                        "pear",
                        "grapes",
                        "Kiwi"};

    //declare char array
    char yourtalents[ITEMS][SIZE] = {"Walking in a straight line",
                                     "Sleeping", "Watching television",
                                     "Mailing letters", "Reading email"};

    char fruit[5][10] = {"Apple",
                         "Orange",
                         "pear",
                         "grapes",
                         "Kiwi"};

    puts("Let's compare talents.\n");
    puts("-----------------------------------------------------------------\n");
    printf("%-36s \t %-25s\n", "My Talents", "Your Talents");
    puts("-----------------------------------------------------------------\n");
    for (int i = 0; i < ITEMS; i++)
    {
        printf("%-36s \t %-25s\n", p_mytalents[i], yourtalents[i]);
    }
    puts("------------------------------------------------------------------\n");
    printf("\nsize of mytalents pointer to char array: %zd bytes\n", sizeof(p_mytalents));
    printf("size of yourtalents char array: %zd bytes\n", sizeof(yourtalents));

    for (int i = 0; i < ITEMS; i++)
    {
        printf("%s \t %s\n", p_fruit[i], fruit[i]);
    }
    return 0;
}