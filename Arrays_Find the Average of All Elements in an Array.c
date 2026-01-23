#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int N;
    scanf("%d",&N);
    int a[N];
    long long sum=0;
    double avg =0;
    for(int i=0;i<N;++i){
        scanf("%d",&a[i]);
        sum=sum+a[i];
}
    avg = (double)sum/N;
    printf("%0.6f",avg);
    return 0;
}
