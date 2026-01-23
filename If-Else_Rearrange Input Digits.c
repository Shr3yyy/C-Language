#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int d1 = N / 1000;
    int d2 = (N / 100) % 10;
    int d3 = (N / 10) % 10;
    int d4 = N % 10;
    int a, b, c, d;

    if (d1 >= d2 && d1 >= d3 && d1 >= d4) {
        a = d1;
        if (d2 >= d3 && d2 >= d4) {
            b = d2;
            if (d3 >= d4) { c = d3; d = d4; }
            else { c = d4; d = d3; }
        }
        else if (d3 >= d2 && d3 >= d4) {
            b = d3;
            if (d2 >= d4) { c = d2; d = d4; }
            else { c = d4; d = d2; }
        }
        else {
            b = d4;
            if (d2 >= d3) { c = d2; d = d3; }
            else { c = d3; d = d2; }
        }
    }
    else if (d2 >= d1 && d2 >= d3 && d2 >= d4) {
        a = d2;
        if (d1 >= d3 && d1 >= d4) {
            b = d1;
            if (d3 >= d4) { c = d3; d = d4; }
            else { c = d4; d = d3; }
        }
        else if (d3 >= d1 && d3 >= d4) {
            b = d3;
            if (d1 >= d4) { c = d1; d = d4; }
            else { c = d4; d = d1; }
        }
        else {
            b = d4;
            if (d1 >= d3) { c = d1; d = d3; }
            else { c = d3; d = d1; }
        }
    }
    else if (d3 >= d1 && d3 >= d2 && d3 >= d4) {
        a = d3;
        if (d1 >= d2 && d1 >= d4) {
            b = d1;
            if (d2 >= d4) { c = d2; d = d4; }
            else { c = d4; d = d2; }
        }
        else if (d2 >= d1 && d2 >= d4) {
            b = d2;
            if (d1 >= d4) { c = d1; d = d4; }
            else { c = d4; d = d1; }
        }
        else {
            b = d4;
            if (d1 >= d2) { c = d1; d = d2; }
            else { c = d2; d = d1; }
        }
    }
    else {
        a = d4;
        if (d1 >= d2 && d1 >= d3) {
            b = d1;
            if (d2 >= d3) { c = d2; d = d3; }
            else { c = d3; d = d2; }
        }
        else if (d2 >= d1 && d2 >= d3) {
            b = d2;
            if (d1 >= d3) { c = d1; d = d3; }
            else { c = d3; d = d1; }
        }
        else {
            b = d3;
            if (d1 >= d2) { c = d1; d = d2; }
            else { c = d2; d = d1; }
        }
    }

    printf("%d%d%d%d", a, b, c, d);
    return 0;
}
