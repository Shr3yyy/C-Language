#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;++i){
        scanf("%d",&ar[i]);
    }
    int target;
    scanf("%d",&target);
    int last=-1;
    for(int i=0;i<n;++i){
        if(ar[i]==target){
            last=i;
        }
    }
    printf("%d",last);
    return 0;
}
