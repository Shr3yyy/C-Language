#include <stdio.h>
int totalSeconds(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    int hrs, mins, secs;
    scanf("%d %d %d", &hrs, &mins, &secs);

    int result = totalSeconds(hrs, mins, secs);

    printf("Total seconds: %d", result);

    return 0;
}
