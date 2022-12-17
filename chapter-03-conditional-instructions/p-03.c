<<<<<<< HEAD
#include<stdio.h>

int main(){
    
    // Calculate income tax paid by an employee to the government
    // as per the slabs mentioned
    float salary, tax_amount;

    printf("Enter your annual income:");
    scanf("%f", &salary);

    if (salary >= 250000 && salary < 500000) {
        // 5 percent tax
        tax_amount = 0.05 * (salary - 250000);
        printf("You have to pay a tax of - %f", tax_amount);
    }
    else if (salary >= 500000 && salary < 1000000)
    {
        // 20 percent tax
        tax_amount = 0.2 * (salary - 500000);
        printf("You have to pay a tax of - %f", tax_amount);
    }
    else if (salary > 1000000) {
        // 30 percent tax
        tax_amount = 0.3 * (salary - 1000000);
        printf("You have to pay a tax of : %f", tax_amount);
    }
    else
    {
        // Invalid input
        printf("Please enter an appropriate annual income");
    }
    return(0);
=======
#include<stdio.h>

int main(){
    
    return(0);
>>>>>>> f53dac51808840395176839785d71f521693ba11
}