#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",n);
    for(int i=n;i>1;){
        if(i%2==0){
            i=i/2;
        }
        else{
            i=i*3+1;
        }
        printf(" -> %d",i);
    } 
    return 0;
}
