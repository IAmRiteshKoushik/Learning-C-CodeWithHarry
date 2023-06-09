/*
 * Program to evaluate face values. 
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    
    if (card_name[0] == 'Q' || card_name[0] == 'J' || card_name[0] == 'K'){
        val = 10;
    } else {
        val = atoi(card_name);
    }

    /* Check */
    if ((val > 2) && (val < 7)){
        puts("Count has gone up");
    }
    /*  */
    else if (val == 10) {
        puts("Count has gone down");
    }
    return(0);
}
