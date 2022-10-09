#include<stdio.h>

int main(){
    int english, hindi, maths;
    float total;
    
    // Inputs
    printf("Enter your marks in english :");
    scanf("%d", &english);
    printf("Enter your marks in hindi :");
    scanf("%d", &hindi);
    printf("Enter your marks in maths :");
    scanf("%d", &maths);
    total = (english + maths + hindi)/3;

    // Checking conditions + outputs
    if ((total < 40) || english < 33 || maths < 33 || hindi < 33) {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else {
        printf("Your total percentage is %f and you are pass\n", total);
    } 
    return(0);
}

