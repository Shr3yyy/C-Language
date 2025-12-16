#include <stdio.h>

int main() {
    long long n;
    int i;
    scanf("%lld %d", &n, &i);

    long long bit = (n >> i) & 1;
    printf("%lld", bit);

    return 0;
}
