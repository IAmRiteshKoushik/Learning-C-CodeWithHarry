#include<stdio.h>

int main(){
    // Checking if a nuumber is divisible by 97 or not
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num % 97);
    return(0);
}