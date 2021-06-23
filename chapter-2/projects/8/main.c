#include <stdio.h>

int main(void)
{
    float amount, rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    rate = rate / 1200.0f;

    amount = amount - monthly_payment + amount * rate;
    printf("\nBalance remaining after first payment: $%.2f\n", amount);

    amount = amount - monthly_payment + amount * rate;
    printf("Balance remaining after second payment: $%.2f\n", amount);

    amount = amount - monthly_payment + amount * rate;
    printf("Balance remaining after third payment: $%.2f\n", amount);

    return 0;
}