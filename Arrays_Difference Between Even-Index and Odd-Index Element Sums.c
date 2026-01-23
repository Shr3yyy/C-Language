#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    long long evenSum = 0, oddSum = 0;
    long long x;

    for (int i = 0; i < N; i++) {
        scanf("%lld", &x);
        if (i % 2 == 0)
            evenSum += x;
        else
            oddSum += x;
    }

    printf("%lld", evenSum - oddSum);

    return 0;
}
