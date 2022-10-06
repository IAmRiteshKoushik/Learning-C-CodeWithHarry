#include<stdio.h>

int main()
{
    // Simple Interest Program = PRT/100
    int principle, rate, years;
    principle = 4000; rate = 20; years = 2;
    printf("%d", principle * rate * years / 100);
    return(0);
}