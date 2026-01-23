#include <stdio.h>
int main(){
int h,m;
scanf ("%d %d", &h, &m);
if (h==0)
{
    printf("12:%02d AM", m);
}
else if (h>12){
    printf("%d:%02d PM", h-12,m);
}
else if (h<12){
    printf("%d:%02d AM",h,m);
}
else if (h==12){
    printf("12:%02d PM",m);
}
return 0;
}
