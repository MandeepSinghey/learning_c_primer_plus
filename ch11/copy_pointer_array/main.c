/* p_and_s.c -- pointers and strings 

*/
#include <stdio.h>

int main(void)
{
    const char *mesg = "Don't be a fool!";
    //new string pointer
    const char *copy;
    //copy the string or just point?
    copy = mesg;
    printf("mesg = %s; ## pointer location in memory &mesg = %p; ## pointed to string location = %p\n",
           mesg, &mesg, mesg);
    printf("copy = %s; ## pointer location in memory &copy = %p; ## pointed to string location = %p\n",
           copy, &copy, copy);
    /*
    1. No surprises here; all the strings are "Don't be a fool!" .
    
    2. The next item on each line is the address of the specified pointer. 
    For this particular run, the two pointers mesg and copy are 
    stored in memory itself at locations 0x0012ff48 and 0x0012ff44 , respectively.
    
    3. Now notice the final item, the one we called value . It is the value of the specified pointer.
    The value of the pointer is the address it contains. You can see that mesg points to location
    0x0040a000 , and so does copy . 
    
    Therefore, the string itself was never copied. All that copy =
    mesg; does is produce a second pointer pointing to the very same string*/

    return 0;
}