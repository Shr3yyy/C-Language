#include <stdio.h>

int main() {
    double income;
    scanf("%lf", &income);

    if (income < 0) {
        printf("INVALID");
        return 0;
    }

    double tax = 0;

    if (income > 1000000) {
        tax += (income - 1000000) * 0.30;
        income = 1000000;
    }
    if (income > 500000) {
        tax += (income - 500000) * 0.20;
        income = 500000;
    }
    if (income > 250000) {
        tax += (income - 250000) * 0.05;
    }

    printf("%.2f", tax);
    return 0;
}
