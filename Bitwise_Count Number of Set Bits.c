#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if ((n >> i) & 1) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
