#include<stdio.h>

int main(){

    // Pointer arithmetic changes can be easily visualized 
    // with unsigned integers so, using %u is easier.
    // But it results in undefined behaviour with the compiler
    // On Linux based gcc compilers, it does not work
    // But Windows GCC compilers allow it. 

    // Figure out the basics of hexadecimals and use
    // %p for printing out the hex values.
// ----------------------------------------------------------
    // Integer Pointer - Memory Size (4)
    int i =34;
    int *ptr = &i;
    printf("The value of ptr is %p\n", ptr);
    ptr++;
    printf("The value of ptr is %p\n", ptr);

    // Character Pointer - Memory Size (1)
    char c = 34;
    char *cptr = &c;
    printf("The value of cptr is %p\n", cptr);
    cptr++;
    printf("The value of cptr is %p\n", cptr);

    // Float Pointer - Memory Size (4)
    float f =34.2;
    float *fptr = &f;
    printf("The value of fptr is %p\n", fptr);
    fptr++;
    printf("The value of fptr is %p\n", fptr);
    return(0);

}