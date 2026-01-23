#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    long long D;
    double r1, r2;
    double rpart, ipart;

    scanf("%d %d %d", &a, &b, &c);

    D = (long long)b * b - 4LL * a * c;

    if (D > 0) {
        r1 = (-b + sqrt((double)D)) / (2.0 * a);
        r2 = (-b - sqrt((double)D)) / (2.0 * a);
        printf("Roots: %.2f, %.2f\n", r1, r2);
        printf("Type: Real and Distinct");
    }
    else if (D == 0) {
        r1 = -b / (2.0 * a);
        printf("Roots: %.2f, %.2f\n", r1, r1);
        printf("Type: Real and Equal");
    }
    else {
        rpart = -b / (2.0 * a);
        ipart = sqrt((double)(-D)) / fabs(2.0 * a);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",
               rpart, ipart, rpart, ipart);
        printf("Type: Complex");
    }

    return 0;
}
