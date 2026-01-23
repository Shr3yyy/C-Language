#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    if (n <= 1) {
        printf("None\n");
        return 0;
    }
    
    int isPrime = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Composite\n");
    }
    
    return 0;
}
