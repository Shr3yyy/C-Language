#include<stdio.h>
int main() {
    long long x;
    scanf("%lld", &x);

    if (x == 0) {
        printf("Acute Angle\n");
        return 0;
    }

    int effectiveAngle = x % 360;

    if (effectiveAngle == 0) {
        printf("Full Rotation\n");
    }
    else if (effectiveAngle < 90) {
        printf("Acute Angle\n");
    }
    else if (effectiveAngle == 90) {
        printf("Right Angle\n");
    }
    else if (effectiveAngle < 180) {
        printf("Obtuse Angle\n");
    }
    else if (effectiveAngle == 180) {
        printf("Straight Angle\n");
    }
    else {
        printf("Reflex Angle\n");
    }

    return 0;
}
