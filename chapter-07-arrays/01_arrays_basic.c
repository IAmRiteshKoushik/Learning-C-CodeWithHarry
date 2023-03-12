#include<stdio.h>

int main(){
    // Basic declaration of Array
    int marks[4];  // Integer Array
    marks[0] = 34;
    marks[1] = 45;
    marks[2] = 34;
    marks[3] = 67;
    
    // Printing the elements of an array one by one
    for(int i = 0; i < 4; i++){
        printf("%d\n", marks[i]);
    }
    return 0;
}

