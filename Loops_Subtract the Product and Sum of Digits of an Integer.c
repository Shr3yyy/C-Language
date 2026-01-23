#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int n;
    scanf("%d",&n);
    int sum=0;
    int product=1;
    for(;n>0;n=n/10){
        int digit=n%10;
        sum=sum+digit;
        product=product*digit;
      
}
    printf("%d",product-sum);
    return 0;
}
