#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);    
    int diff = a - b;
    int sign = diff >> 31;
    int min = b + (diff & sign);    
    printf("%d\n", min);    
    return 0;
}
