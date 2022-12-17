// Average of 3 numbers
#include<stdio.h>

int average(int a, int b, int c){
    return (a + b + c)/3;
}

int main(){
    printf("The average of 2, 3 and 4 is %d", average(2,3,4));
    return(0);
}
