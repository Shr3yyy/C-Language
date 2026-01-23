#include<stdio.h>
int main() {
    int hardness, tensile;
    float carbon;

    scanf("%d %f %d", &hardness, &carbon, &tensile);

    int cond1 = (hardness > 50);
    int cond2 = (carbon < 0.7f);
    int cond3 = (tensile > 5600);

    int count = cond1 + cond2 + cond3;
    int grade;

    if (count == 3) {
        grade = 10;
    } else if (cond1 && cond2) {
        grade = 9;
    } else if (cond2 && cond3) {
        grade = 8;
    } else if (cond1 && cond3) {
        grade = 7;
    } else if (count == 1) {
        grade = 6;
    } else {
        grade = 5;
    }

    printf("The grade of the steel is: %d\n", grade);

    if (count == 3) {
        printf("All of the conditions met.");
    } else if (count == 2) {
        printf("Two conditions met.");
    } else if (count == 1) {
        printf("Only one condition met.");
    } else {
        printf("None of the conditions met.");
    }

    return 0;
}
