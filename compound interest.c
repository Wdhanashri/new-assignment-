#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
     printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
     printf("Enter time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Amount after interest = %.2f\n", amount);

    return 0;
}
