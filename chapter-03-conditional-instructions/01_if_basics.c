#include<stdio.h>

int main(){
    // Check whether the number is even or odd
    int a, b;
    printf("Enter a number :");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d is even\n", a);
    }
    else {
        printf("%d is odd\n", a);
    }
    return(0);
}
