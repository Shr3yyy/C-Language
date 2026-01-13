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
    int asc = 1, desc = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) asc = 0;
        if (arr[i] < arr[i + 1]) desc = 0;
    }
    if (asc) printf("Ascending\n");
    else if (desc) printf("Descending\n");
    else printf("Not Sorted\n");
    return 0;
}
