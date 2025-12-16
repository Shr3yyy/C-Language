#include <stdio.h>

int main() {
    long long n;
    int i;
    scanf("%lld %d", &n, &i);

    long long result = (n >> i) & 1;
    printf("%lld", result);

    return 0;
}
