#include <stdio.h>
#include <conio.h>

void main() {
    float principal, rate, time, simple_interest;


    clrscr();


    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);



    printf("Enter Number of Years: ");
    scanf("%f", &time);


    simple_interest = (principal * rate * time) / 100;

    printf("\nThe Simple Interest is: %.2f\n", simple_interest);


    getch();
}



