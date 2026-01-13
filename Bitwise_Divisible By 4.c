#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    long long n;
    scanf("%lld",&n);
    if(n<= 2147483647 && n>= -2147483648){
        if((n&3)==0){
            printf("Divisible");
        }
        else{
            printf("Not Divisible");
        }
    }
    else{
           printf("Out of Range");
    }
    return 0;
}
