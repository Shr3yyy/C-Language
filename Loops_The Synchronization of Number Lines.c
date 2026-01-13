#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    if (a == 0 || b == 0) {
    printf("0\n");
    return 0;
}
    int gcd=1;
    for(int i=1;i<=a&&i<=b;++i){
        if(a%i==0&&b%i==0){
         gcd=i;
        }
        
    }
   printf("%d",(a / gcd) * b );
    
    return 0;
}
