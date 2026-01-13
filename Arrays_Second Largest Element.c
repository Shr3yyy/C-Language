#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
     if (n < 2) return -1;
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        if ((long long)arr[i] > first) {
            second = first;
            first = arr[i];
        } else if ((long long)arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return (second == LLONG_MIN) ? -1 : (int)second;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
