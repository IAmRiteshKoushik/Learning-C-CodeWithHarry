#include<stdio.h>

// Function declarations 
void swap(int *a, int *b);
void wrong_swap(int a, int b);

// Driver program
int main(){
    int x = 3, y = 4;
    printf("The value of x and y is %d and %d\n", x, y);
    wrong_swap(x, y); // Passing actual values copy
    swap(&x, &y);  // Passing pointers
    printf("The value of x and y is %d and %d\n", x, y);
    return(0);
}

// Function definitions
void wrong_swap(int a, int b){

    // This method of swapping is wrong
    // as the values are called only after making a copy
    // in the memory. So, changes are not permanent
    // to the variables that are out of the scope of the function.

    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){

    //here, we are making changes the actual variable 
    // because we have access to its addresses
    // through pointers.

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}