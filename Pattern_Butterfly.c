#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n<=1){
        printf("Shape Not Possible");
        return 0;
    }
    for(int i=1;i<=n;++i){
        for(int j=0;j<i;++j){
            printf("*");
        }
        for(int k=0;k<2*(n-i);++k){
            printf(" ");
        }
        for(int j=0;j<i;++j){
            printf("*");
        }
         printf("\n");
       
    }
    
    for(int i=n-1;i>=1;--i){
        for(int j=1;j<=i;++j){
            printf("*");
        }
        for(int k=0;k<2*(n-i);++k){
            printf(" ");
        }
         for(int j=1;j<=i;++j){
            printf("*");
        }
         printf("\n");
}
   
    return 0;
}
