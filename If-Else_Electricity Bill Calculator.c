#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid Input!");
        return 0;
    }

    double bill = 0;

    if (n <= 100) {
        bill = n * 5;
    }
    else if (n <= 300) {
        bill = 100 * 5 + (n - 100) * 7;
    }
    else {
        bill = 100 * 5 + 200 * 7 + (n - 300) * 10;
    }

    if (bill <= 1200) {
        bill = bill - (bill * 10 / 100.0);
    }

    printf("The electricity bill is: %.2f.", bill);
    return 0;
}
