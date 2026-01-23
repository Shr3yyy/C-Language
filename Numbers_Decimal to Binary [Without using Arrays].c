#include <stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int r;
    int bin=0;
    int las=1;
     if(n==0){
        printf("Binary equivalent of 0: 0");
        return 0;
    }
    for(int i=n;i>0;i=i/2){
        r=i%2;
        bin=bin+r*las;
        las=las*10;
        
    }
     printf("Binary equivalent of %d: %d", n, bin);
    return 0;
}
