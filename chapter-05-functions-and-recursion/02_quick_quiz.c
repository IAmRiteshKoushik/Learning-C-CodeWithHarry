#include<stdio.h>

// Three function prototypes being declared
void good_morning();
void good_evening();
void good_night();

int main(){
    // Three functions being called into the main program
    // sequentially (not simulatenously)
    good_morning();
    good_evening();
    good_night();
    return(0);
}

// Three function definitions being written 
void good_morning(){
    printf("Good Morning User!\n");
}
void good_evening(){
    printf("Good Evening User!\n");
}
void good_night(){
    printf("Good Night User!\n");
}