#include <stdio.h>

int main() {
    long long X, Y, Z;
    scanf("%lld %lld %lld", &X, &Y, &Z);

    if (Y != 0 && Z != 0 && X % Y == 0 && X % Z == 0) {
        printf("X defeats all!");
    }
    else if (Y != 0 && X % Y == 0) {
        printf("Y triumphs over X!");
    }
    else if (Z != 0 && X % Z == 0) {
        printf("Z outsmarts X!");
    }
    else {
        printf("X remains undefeated!");
    }

    return 0;
}
