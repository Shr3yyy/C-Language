#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    long long arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    double avg = (double)sum / n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
