#include<stdio.h>

// In C, we are supposed to tell the compiler that a function
// will be declared in the future. (In python, we write 
// the function definition directly and use it)

void display(); // Function prototype

int main(){
    // The function needs to be called from the main body
    // of the program
    printf("Initializing display function\n");
    display();  // Function call
    printf("Display function finished its work\n");
    return(0);
}

// In the body of the function, the entire definition is 
// written -- it is regarding all the executions that are 
// going to happen when the function is called.

void display() { // Function definition
    printf("Hi I am display\n");
}
