#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    int count=0;
    for(int i=0;i<n;++i){
        if(target==a[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
