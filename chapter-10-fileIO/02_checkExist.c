#include<stdio.h>

int main(){

    // Checking whether the file is present or not. 
    FILE *test;
    test = fopen("hello.txt", "r");
    if (test == NULL){
        printf("Yes");
    }
    return(0);
}