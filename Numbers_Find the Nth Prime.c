#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int count = 0;
    int num = 2;
    int i;
    for(num = 2; ;++num){
        
       for(i=2;i<num;++i){
            if(num%i==0){
               break;
     }
    }
        if(num==i){
            count++;
            if(count==n){ 
                printf("%d",num);
                break;
                
            }
}
    }
   return 0;

   
}
