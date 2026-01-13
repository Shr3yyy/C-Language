#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0){
        printf("%d",b);
        return 0;
    }
    if(b==0){
        printf("%d",a);
        return 0;
    }
    int gcd=1;
    for(int i=1;i<=a&&i<=b;++i){
        if(a%i==0&&b%i==0){
         gcd=i;
        }
        
    }
    printf("%d",gcd);
    
    return 0;
}
