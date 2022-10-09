#include<stdio.h>

int main(){
    // Trying to calculate whether a year is a leap
    // year or not.
    // https://learn.microsoft.com/en-us/office/troubleshoot/excel/determine-a-leap-year
    // Reference above!
    int year;
    printf("Enter a year to check for leap year:");
    scanf("%d", &year);

    /* Method 1 */
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("It is a leap year.\n");
            } else {
                printf("It is not leap year.\n");
            }
        } else {
            printf("It is a leap year.\n");
        }
    } else {
        printf("It is not a leap year.\n");
    }
    

   /* Method 2
   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100 but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }
   */

    return(0);
}