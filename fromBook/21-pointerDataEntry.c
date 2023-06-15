#include<stdio.h>

int main(){
    /* char food[5];
    printf("Enter your favourite food: ");
    scanf("%s", food);
    printf("Favourite food: %s\n", food); */

    /* Using fgets() as an alternative to scanf() */
    char food[5];
    printf("Enter favourite food: ");
    fgets(food, sizeof(food), stdin);
    /* This accepts only 3 charactes and the 4th character is \0 */
    printf("%s", food);
    return(0);
}