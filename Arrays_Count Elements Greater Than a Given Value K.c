#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    long long arr[100001];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    long long k;
    scanf("%lld", &k);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
