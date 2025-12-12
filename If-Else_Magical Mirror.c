#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) {
        printf("The verdict for the number %d is: INVALID", N);
        return 0;
    }

    int c1 = (N % 2 == 0 && N > 10);
    int c2 = (N > 15 && N % 3 == 0);
    int c3 = (N % 7 == 0);

    int count = c1 + c2 + c3;

    if (count == 3) {
        printf("The verdict for the number %d is: SUPERNATURAL", N);
    }
    else if (count == 2) {
        printf("The verdict for the number %d is: MIRACULOUS", N);
    }
    else if (count == 1) {
        printf("The verdict for the number %d is: MAGICAL", N);
    }
    else {
        printf("The verdict for the number %d is: NORMAL", N);
    }

    return 0;
}
