#include <stdio.h>

int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
