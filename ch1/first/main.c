/*include the standard input output header and IS A "preprocessOR DIRECTIVE"

The effect of this incLude is that as if you have typed all contents of this 
stdio file inside this particular file. It is cut and paste operations

It contains information about
input and output functions, such as printf() , for the compiler to use

For the most part, header files contain information used by the compiler to build the final
executable program. For example, they may define constants or indicate the names of functions
and how they should be used. But the actual code for a function is in a library file of precompiled
code, not in a header file. 

The linker component of the compiler takes care of finding the
library code you need. In short, header files help guide the compiler in putting your program
together correctly.

Perhaps you are wondering why facilities as basic as input and output aren’t included automatically.

One answer is that not all programs use this I/O (input/output) package, and part
of the C philosophy is to avoid carrying unnecessary weight. 

This principle of economic use of resources makes C popular for embedded programming
—for example, writing code for a chip that controls an automotive fuel system or a Blu-ray player. 

Incidentally, the #includE line is not even a C language statement! T
he # symbol in column 1 identifies the line as one
to be handled by the C preprocessor before the compiler takes over.
*/
#include <stdio.h>

//int = Returns integer
//Void =Doesn't take any argument
//MAIN FUNCTION must be there to start the things
int main(void)
{
    //DECLARATIONS
    int num;
    num = 1;
    //call printf = print function
    printf("I am simple computer and my favourite number is %d \n", num);
}