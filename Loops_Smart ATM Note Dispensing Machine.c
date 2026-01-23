#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int amount;
    scanf("%d", &amount);
    
    if (amount <= 0) {
        printf("Invalid amount\n");
        return 0;
    }
    
    int notes500 = amount / 500;
    amount = amount % 500;
    
    int notes200 = amount / 200;
    amount = amount % 200;
    
    int notes100 = amount / 100;
    
    printf("500-rupee notes: %d\n", notes500);
    printf("200-rupee notes: %d\n", notes200);
    printf("100-rupee notes: %d\n", notes100);
    
    return 0;
}
