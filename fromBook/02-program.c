#include<stdio.h>

int main(){
    /* Assume name shorter than 20 chars */
    /* Introducing character arrays */
    char ex[20];
    puts("Enter boyfriend's name:");
    scanf("%19s", ex);
    printf("Dear %s. \n\n\tYou're history.\n", ex);
    return(0);
}