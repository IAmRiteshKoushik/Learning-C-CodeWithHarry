#include<stdio.h>

int main(){
    // Print from 10 to 20 when starting for variable is set 0
    int a = 0;
    while (a < 21) {
        if (a > 9) {
            printf("%d\n", a);
        }
        a++;
    }
    return(0);
}