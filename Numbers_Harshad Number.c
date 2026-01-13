#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

   int N;
    scanf("%d",&N);
    int n1=N/1000;
    int n2=(N/100)%10;
    int n3=(N/10)%10;
    int n4=N%10;
    int sum=n1+n2+n3+n4;
    if(N%sum==0){
     printf("%d is a harshad number",N);
    }
    else{
        printf("%d is not a harshad number",N);
    }
    return 0;
}
