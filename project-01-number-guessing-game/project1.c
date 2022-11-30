#include<stdio.h>
#include<stdlib.h> // Standard Library has been imported
#include<time.h> // Time library has been imported

int main(){
    
    /*
    TWe will write a program that generates a random
    number and asks the player to guess it. If the 
    player's guess is higher than the actual number
    the program displays "lower number please"
    . Similary, if th euser's guess is too low, the program prints "higher number please"
    When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number 
    */

   /*
   Hint : Loops to be used in this.
   */

   int number, guess, nguesses = 1;
   // Here random number is  
   srand(time(0));
   // But random numbers are 5 digit numbers so they are 
   // being converted into 3 digit numbers by remainder
   // divison by 100 and adding 1 to it.
   number = rand()%100 + 1;
   // rand function generates random numbers

   // Keep running the loop until the number is guesses
   do
   {
    printf("Guess the number between 1 to 100: ");
    scanf("%d", &guess);
    if (guess > number) {
        printf("Lower number please\n");
    } else if (guess < number)
    {
        printf("Higher number please\n");
    } else
    {
        printf("You guesses it in %d attempt[s]\n", nguesses);
    }
    nguesses++;
    
   } while (guess != number);
   
    return(0);
}