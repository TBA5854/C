#include <stdio.h>

const char* day_name(int n) {
    static const char* days[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    if (n >= 0 && n < 7) {
        return days[n];
    } else {
        return NULL;
    }
}

int main() {
    int day;
    printf("Enter day number: ");
    scanf("%d", &day);
    const char* name = day_name(day);
    if (name != NULL) {
        printf("%s\n", name);
    } else {
        printf("Invalid\n");
    }
    return 0;
}
