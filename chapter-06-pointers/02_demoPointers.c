#include<stdio.h>

int main(){
    int i = 8;
    int *j;
    j = &i;  // Storing pointer value

    printf("Add i = %p\n", &i);  // M1 : Get ptr val
    printf("Value i = %p\n", j); // M2 - Get ptr val
    printf("Add j  = %p\n", &j); // Get pointer of pointer
    printf("Value of i = %d\n", i); // Actual value (not ptr)

    printf("Value of i = %d\n", *(&i)); // Actual value of ptr of i
    printf("Value of i = %d\n", *j); // Value of ptr of i


    // Basically;
    // Actual value of "i" = actual value of ptr of "i" = value of ptr of "i"
    return(0);
}