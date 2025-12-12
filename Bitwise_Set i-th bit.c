#include <stdio.h>

int main() {
    long long n;
    int i;
    scanf("%lld %d", &n, &i);

    n = n | (1LL << i);

    printf("%lld", n);
    return 0;
}
