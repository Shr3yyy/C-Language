#include <stdio.h>
int main() {
int days,flag=0;
    double amt,ini,low;
    scanf("%lf %d",&amt,&days);
    ini = amt;
    low = amt;
    for(int i=1;i<=days;i++){
       if(amt < ini*0.4){
            printf("Stopped early after %d days: %.2f\n",i-1,amt);
             flag=1;
            break;
         }
        
        if(i%2==0 && i%3==0){
            amt += (amt*0.7);
            i +=6;
           continue;
        }
        else if(!(i%2)){
            amt -= (amt*0.125);
        }
        else if(!(i%3)){
            amt -= (amt*0.2);
        } 
        else{
            amt -= (amt*0.1);
        }
        if (amt < low){
            low = amt;
        }
         
    }
    if(!flag){
        printf("After %d days: %.2f\n",days,amt);
    }
     
    printf("Minimum amount held by Bhaskar: %.2f\n",low);
    
    if(amt >= ini*0.7 ){
        printf("Lucky Bhaskar");
    }
    else{
        printf("Better Luck Next Time!\n");
    }
    
    return 0;
}
