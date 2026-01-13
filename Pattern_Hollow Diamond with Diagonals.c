#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n<2){
     printf("Shape Not Possible");
        return 0;
    }
    for(int i=1;i<n;++i){
     for(int k=0;k<n-i;++k){
      printf(" ");
     }
        for(int j=1;j<=2*i-1;++j){
            if(j==1||j==2*i-1||j==i){
         printf("*");
        }
        else{
            printf(" ");
   }
        }
        printf("\n");
    }
    for(int i=0;i<2*n-1;++i){
     printf("*");
    }
    printf("\n");
    for(int i=n-1;i>0;--i){
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || j == i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }



    return 0;
}
