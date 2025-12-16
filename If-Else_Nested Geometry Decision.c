#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("Circle");
        return 0;
    }
    if (n == 3) {
        double a, b, c;
        int A, B, C;
        scanf("%lf %lf %lf %d %d %d", &a, &b, &c, &A, &B, &C);
        if (a <= 0 || b <= 0 || c <= 0) {
            printf("Invalid Figure");
            return 0;
        }
        if (A <= 0 || B <= 0 || C <= 0) {
            printf("Invalid Figure");
            return 0;
        }
        if (A + B + C != 180) {
            printf("Invalid Figure");
            return 0;
        }
        if (a == b && b == c && A == 60 && B == 60 && C == 60) {
            printf("Equilateral Triangle");
        }
        else if ((a == b && A == B) ||
                 (b == c && B == C) ||
                 (a == c && A == C)) {
            printf("Isosceles Triangle");
        }
        else {
            printf("Scalene Triangle");
        }
    }
    else if (n == 4) {
        double a, b, c, d;
        int A, B, C, D;
        scanf("%lf %lf %lf %lf %d %d %d %d", &a, &b, &c, &d, &A, &B, &C, &D);
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
            printf("Invalid Figure");
            return 0;
        }
        if (A <= 0 || B <= 0 || C <= 0 || D <= 0) {
            printf("Invalid Figure");
            return 0;
        }
        if (A + B + C + D != 360) {
            printf("Invalid Figure");
            return 0;
        }
        int all90 = (A == 90 && B == 90 && C == 90 && D == 90);
        if (a == b && b == c && c == d && all90) {
            printf("Square");
        }
        else if (a == c && b == d && all90) {
            printf("Rectangle");
        }
        else if (a == b && b == c && c == d && !(all90) &&
                 (A == C && B == D)) {
            printf("Rhombus");
        }
        else if (a == c && b == d &&
                 (A == C && B == D)) {
            printf("Parallelogram");
        }
        else {
            printf("Invalid Figure");
        }
    }
    else {
        printf("Invalid Figure");
    }
    return 0;
}
