#include<stdio.h>

int main(){
    for (int i = 10; i; i--) {
        printf("%d\n", 10 * i);
        // Loops have a terminating condition at 0
        // But if it is incremental then it will head to
        // infinity
    }
    return(0);
}