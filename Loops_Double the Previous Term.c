#include <stdio.h>
   int main(){
       int n;
    scanf("%d",&n);
    if(n<=0){
        return 0;
    }
    printf("<");
    for(int i=0;i<n;++i){
    if (i>0){
            printf(" ");
    }
        printf("%d",1<<i);
        
      
    }
    printf(">");
        return 0;
}
