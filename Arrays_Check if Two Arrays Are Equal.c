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
    int m;
    scanf("%d",&m);
    int arr[m];
   
     for(int i=0;i<m;++i){
        scanf("%d",&arr[i]);
    }
    if(n!=m){
        printf("Not Equal");
        return 0;
    }
    for(int i=0;i<m;++i){
        if(ar[i]!=arr[i]){
            printf("Not Equal");
            return 0;
        }
    }
    printf("Equal");
    return 0;
}
