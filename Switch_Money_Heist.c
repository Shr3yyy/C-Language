#include <stdio.h>

int main() {
    int digit0, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9;
    int wrongDigitIndex, adjustmentValue;

    scanf("%d %d %d %d %d %d %d %d %d %d",
          &digit0, &digit1, &digit2, &digit3, &digit4,
          &digit5, &digit6, &digit7, &digit8, &digit9);

    scanf("%d %d", &wrongDigitIndex, &adjustmentValue);
    switch (wrongDigitIndex) {
        case 0: digit0 = (digit0 + adjustmentValue) % 10; break;
        case 1: digit1 = (digit1 + adjustmentValue) % 10; break;
        case 2: digit2 = (digit2 + adjustmentValue) % 10; break;
        case 3: digit3 = (digit3 + adjustmentValue) % 10; break;
        case 4: digit4 = (digit4 + adjustmentValue) % 10; break;
        case 5: digit5 = (digit5 + adjustmentValue) % 10; break;
        case 6: digit6 = (digit6 + adjustmentValue) % 10; break;
        case 7: digit7 = (digit7 + adjustmentValue) % 10; break;
        case 8: digit8 = (digit8 + adjustmentValue) % 10; break;
        case 9: digit9 = (digit9 + adjustmentValue) % 10; break;
    }

    scanf("%d %d", &wrongDigitIndex, &adjustmentValue);
    switch (wrongDigitIndex) {
        case 0: digit0 = (digit0 + adjustmentValue) % 10; break;
        case 1: digit1 = (digit1 + adjustmentValue) % 10; break;
        case 2: digit2 = (digit2 + adjustmentValue) % 10; break;
        case 3: digit3 = (digit3 + adjustmentValue) % 10; break;
        case 4: digit4 = (digit4 + adjustmentValue) % 10; break;
        case 5: digit5 = (digit5 + adjustmentValue) % 10; break;
        case 6: digit6 = (digit6 + adjustmentValue) % 10; break;
        case 7: digit7 = (digit7 + adjustmentValue) % 10; break;
        case 8: digit8 = (digit8 + adjustmentValue) % 10; break;
        case 9: digit9 = (digit9 + adjustmentValue) % 10; break;
    }

    scanf("%d %d", &wrongDigitIndex, &adjustmentValue);
    switch (wrongDigitIndex) {
        case 0: digit0 = (digit0 + adjustmentValue) % 10; break;
        case 1: digit1 = (digit1 + adjustmentValue) % 10; break;
        case 2: digit2 = (digit2 + adjustmentValue) % 10; break;
        case 3: digit3 = (digit3 + adjustmentValue) % 10; break;
        case 4: digit4 = (digit4 + adjustmentValue) % 10; break;
        case 5: digit5 = (digit5 + adjustmentValue) % 10; break;
        case 6: digit6 = (digit6 + adjustmentValue) % 10; break;
        case 7: digit7 = (digit7 + adjustmentValue) % 10; break;
        case 8: digit8 = (digit8 + adjustmentValue) % 10; break;
        case 9: digit9 = (digit9 + adjustmentValue) % 10; break;
    }

    printf("%d %d %d %d %d %d %d %d %d %d",
           digit0, digit1, digit2, digit3, digit4,
           digit5, digit6, digit7, digit8, digit9);

    return 0;
}
