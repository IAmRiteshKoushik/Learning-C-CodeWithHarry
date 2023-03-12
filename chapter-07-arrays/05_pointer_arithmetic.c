#include<stdio.h>

int main(){

    // Pointer arithmetic changes can be easily visualized 
    // with unsigned integers so, using %u is easier.
    // But it results in undefined behaviour with the compiler
    // On Linux based gcc compilers, it does not work
    // But Windows GCC compilers allow it. 

    // Figure out the basics of hexadecimals and use
    // %p for printing out the hex values.

    int i =34;
    int *ptr = &i;
    printf("The value of ptr is %p\n", ptr);
    ptr++;
    printf("The value of ptr is %p\n", ptr);
    return(0);

}