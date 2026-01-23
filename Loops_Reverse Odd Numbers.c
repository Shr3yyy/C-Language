#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("\n");
        return 0;
    }
    int lastOdd = 2 * n - 1;
    for (int i = lastOdd; i >= 1; i -= 2) {
        printf("%d", i);
        if (i != 1)
            printf(" ");
    }
    printf(".\n");
    return 0;
}
