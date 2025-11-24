include<stdio.h>
int buildNumber(short a, short b, short c, short d) {
    int num = a*1000 + b*100 + c*10 + d;
    return num * 5;
}
int main() {
    short a, b, c, d;
    scanf("%hd %hd %hd %hd", &a, &b, &c, &d);
    int result = buildNumber(a, b, c, d);
    printf("The number is: %d", result);
    return 0;
}
