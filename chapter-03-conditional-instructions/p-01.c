#include<stdio.h>

int main(){
    int a = 10;
    if (a = 11)
    printf("A is 11");
    else
    printf("A is not 11");
    return(0);
}

// We are using "=" not "=="
// This is an assigment operator and when something is assigned
// is returns the value 1 (not 0)
// hence the first if statement gets executed

// Another important observation is that 
// there are no curly brackets in this program for the if-else 
// block. That is becuase it is allowed to run a single link of if-else
// without adding curly brackets. But in an event where there is a bigger 
// code block then curly brackets is a must or else it will throw error.