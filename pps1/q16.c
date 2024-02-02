#include <stdio.h>

void quack(int n, float mags[]) {
    int low = 0, medium = 0, high = 0;

    for (int i = 0; i < n; i++) {
        if (mags[i] < 5.4) {
            low++;
        } else if (mags[i] >= 5.4 && mags[i] <= 7.0) {
            medium++;
        } else if (mags[i] > 7.0) {
            high++;
        }
    }

    if (n == 0) {
        printf("No earthquake predicted\n");
    } else if (n < 0) {
        printf("Invalid Input\n");
    } else {
        printf("Low magnitude earthquakes: %d\n", low);
        printf("Medium magnitude earthquakes: %d\n", medium);
        printf("High magnitude earthquakes: %d\n", high);
    }
}

int main() {
    int n;
    printf("Enter the number of earthquakes recorded: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid Input\n");
        return 0;
    }

    float mag[n];
    printf("Enter the magnitudes of the earthquakes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &mag[i]);
    }

    quack(n, mag);
    return 0;
}
