#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("%d\n", n);
        return 0;
    }
    
    int distance = 1;
    while (1) {
        int lower = n - distance;
        int upper = n + distance;
        
        if (lower >= 2 && isPrime(lower)) {
            printf("%d\n", lower);
            break;
        }
        
        if (isPrime(upper)) {
            printf("%d\n", upper);
            break;
        }
        
        distance++;
    }
    
    return 0;
}
