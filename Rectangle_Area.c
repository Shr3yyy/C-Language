int area(int length, int width) {
    return length * width;
}
int main() {
    int length, width;
    scanf("%d %d", &length, &width);
    int result = area(length, width);
    printf("The area is: %d units", result);
    return 0;
}
