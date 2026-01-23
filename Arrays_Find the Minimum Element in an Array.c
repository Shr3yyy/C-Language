#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;++i){
        scanf("%d",&a[i]);
}
    int min=a[0];
    for(int i=1;i<N;++i){
        if(a[i]<min){
            min=a[i];
}
}
    printf("%d",min);
    return 0;
}
