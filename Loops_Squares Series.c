#include <stdio.h>
int main() {

    int N;
    scanf("%d",&N);
    int count=0;
    for(int i=1;count<N;++i){
        if(i%3!=0){
        printf("%d ",i*i);
            count++;
            }
    }
    return 0;
}
