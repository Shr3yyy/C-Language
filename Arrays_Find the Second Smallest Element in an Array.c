#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    long long smallest = LLONG_MAX;
    long long secondSmallest = LLONG_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }
    
    if (secondSmallest == LLONG_MAX) {
        printf("-1\n");
    } else {
        printf("%lld\n", secondSmallest);
    }
    
    return 0;
}
