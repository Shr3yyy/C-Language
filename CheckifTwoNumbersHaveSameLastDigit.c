#include <stdio.h>
int main() {

   int a,b;
    scanf("%d %d",&a,&b);
    int alast= a-(a/10)*10;
    int blast= b-(b/10)*10;
    if(alast==blast){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
