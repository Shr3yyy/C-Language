#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long arr[100001];
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    long long expected = (long long)n * (n + 1) / 2;
    printf("%lld\n", expected - sum);
    return 0;
}
