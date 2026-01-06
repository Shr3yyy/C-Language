#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    long long larger[100000];
    int count = 0;
    
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%lld ", i);
            if (i != n / i) {
                larger[count++] = n / i;
            }
        }
    }
    
    for (int i = count - 1; i >= 0; i--) {
        printf("%lld ", larger[i]);
    }
    printf("\n");
    
    return 0;
}
