#include<stdio.h>

int main(){
    
    int n = 1, count;
    printf("How many natural numbers should be printed ?:");
    scanf("%d", &count);

    do {
        printf("%d", n);
        n++;
    } while (n < count);
    
    return(0);
}