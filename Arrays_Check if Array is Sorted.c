#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long arr[1000001];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    int sorted = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }
    printf("%s\n", sorted ? "Sorted" : "Not Sorted");
    return 0;
}
