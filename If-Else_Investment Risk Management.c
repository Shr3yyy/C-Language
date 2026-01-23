#include <stdio.h>

int main() {
    int age, income, tolerance;

    scanf("%d", &age);
    scanf("%d", &income);
    scanf("%d", &tolerance);

    if (age < 30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
    }
    else if (age >= 30 && age <= 50) {
        if (income <= 75000) {
            if (tolerance == 2) {
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
            } else if (tolerance == 1) {
                printf("Low Risk Portfolio: Suitable for conservative investments.\n");
            } else {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
            }
        } else {
            if (tolerance == 3) {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
            } else {
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
            }
        }
    }
    else {
        if (tolerance == 3 && income > 75000) {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
        } else if (income <= 30000 && (tolerance == 1 || tolerance == 2)) {
            printf("Low Risk Portfolio: Suitable for conservative investments.\n");
        } else {
            printf("Low Risk Portfolio: Suitable for conservative investments.\n");
        }
    }

    return 0;
}
