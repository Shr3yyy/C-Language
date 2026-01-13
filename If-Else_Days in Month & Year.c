#include <stdio.h>
#include <string.h>

int main() {
    int year, month;
    scanf("%d", &month);
    scanf("%d", &year);
    
    if (month < 1 || month > 12) {
        printf("Invalid Month\n");
    }
    
    if (year < 1) {
        printf("Invalid Year\n");
    }
    
   
    if ((month >= 1 && month <= 12) && (year >= 1)) {
        if (month == 2) {
            if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
                printf("29\n");
            } else {
                printf("28\n");
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            printf("30\n");
        } else {
            printf("31\n");
        }
    }
    
    return 0;
}
