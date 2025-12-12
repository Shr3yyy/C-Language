#include <stdio.h>

int main() {
int num,i;
    scanf("%d",&num);
    scanf("%d",&i);
    int res = num | (1<<i);
    printf("%d", res);
    return 0;
}
