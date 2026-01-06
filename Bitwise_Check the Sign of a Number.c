#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n >> 31) {
        printf("Negative\n");
    } else {
        printf("Positive\n");
    }
    
    return 0;
}
