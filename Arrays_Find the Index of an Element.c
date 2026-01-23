#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int index = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    printf("%d", index);
    return 0;
}
