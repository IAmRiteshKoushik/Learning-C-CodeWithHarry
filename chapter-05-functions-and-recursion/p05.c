// Interesting observation - precedence of %d specifier
#include<stdio.h>

int main(){
    int a = 7;

    // The arguments are passed from left to right when you are using the minGW compiler. The way of passing arguments does depend on the compiler. As it is processed form left to right, the incrementation function is getting carried out before displaying the a variable in the print function. 

    printf("%d %d %d", a, ++a, a++);
    return(0);
}
