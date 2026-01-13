#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int temp;
    scanf("%d",&temp);
    if(temp<0){
        printf("Freezing");
    }
    else if(temp>=0&&temp<=30){
        printf("Normal");
    }
    else{
        printf("Hot");
    }
    return 0;
}
