#include<stdio.h>

int main(){
    int a;
    printf("Enter a\n");
    scanf("%d", &a);

    // One-Liner If statements
    (a<5) ? printf("A is less than 5") : printf("A is greater than 5");

    return(0);
}