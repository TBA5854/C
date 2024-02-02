#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    if (count == 1) {
        int digit1 = num;
        printf("Permutations: %d\n", digit1);
    } else if (count == 2) {
        int digit1 = num / 10;
        int digit2 = num % 10;
        if (digit1 > digit2) {
            int temp = digit1;
            digit1 = digit2;
            digit2 = temp;
        }
        printf("Permutations: %d %d, %d %d\n", digit1, digit2, digit2, digit1);
    } else if (count == 3) {
        int digit1 = num / 100;
        int digit2 = (num / 10) % 10;
        int digit3 = num % 10;
        if (digit1 > digit2) {
            int temp = digit1;
            digit1 = digit2;
            digit2 = temp;
        }
        if (digit1 > digit3) {
            int temp = digit1;
            digit1 = digit3;
            digit3 = temp;
        }
        if (digit2 > digit3) {
            int temp = digit2;
            digit2 = digit3;
            digit3 = temp;
        }
        printf("Permutations: %d %d %d, %d %d %d, %d %d %d, %d %d %d, %d %d %d, %d %d %d\n",
               digit1, digit2, digit3, digit1, digit3, digit2, digit2, digit1, digit3,
               digit2, digit3, digit1, digit3, digit1, digit2, digit3, digit2, digit1);
    } else if (count == 4) {
        int digit1 = num / 1000;
        int digit2 = (num / 100) % 10;
        int digit3 = (num / 10) % 10;
        int digit4 = num % 10;
        if (digit1 > digit2) {
            int temp = digit1;
            digit1 = digit2;
            digit2 = temp;
        }
        if (digit1 > digit3) {
            int temp = digit1;
            digit1 = digit3;
            digit3 = temp;
        }
        if (digit1 > digit4) {
            int temp = digit1;
            digit1 = digit4;
            digit4 = temp;
        }
        if (digit2 > digit3) {
            int temp = digit2;
            digit2 = digit3;
            digit3 = temp;
        }
        if (digit2 > digit4) {
            int temp = digit2;
            digit2 = digit4;
            digit4 = temp;
        }
        if (digit3 > digit4) {
            int temp = digit3;
            digit3 = digit4;
            digit4 = temp;
        }
        printf("Permutations: %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d, %d %d %d %d\n",
               digit1, digit2, digit3, digit4, digit1, digit2, digit4, digit3, digit1, digit3, digit2, digit4,
               digit2, digit1, digit3, digit4, digit2, digit3, digit1, digit4, digit3, digit1, digit2, digit4,
               digit3, digit2, digit1, digit4, digit3, digit4, digit1, digit2, digit3, digit2, digit1, digit4,
               digit4, digit3, digit2, digit1, digit4, digit3, digit1, digit2, digit4, digit2, digit3, digit1);
    } else if (count == 5) {
        int digit1 = num / 10000;
        int digit2 = (num / 1000) % 10;
        int digit3 = (num / 100) % 10;
        int digit4 = (num / 10) % 10;
        int digit5 = num % 10;
        if (digit1 > digit2) {
            int temp = digit1;
            digit1 = digit2;
            digit2 = temp;
        }
        if (digit1 > digit3) {
            int temp = digit1;
            digit1 = digit3;
            digit3 = temp;
        }
        if (digit1 > digit4) {
            int temp = digit1;
            digit1 = digit4;
            digit4 = temp;
        }
        if (digit1 > digit5) {
            int temp = digit1;
            digit1 = digit5;
            digit5 = temp;
        }
        if (digit2 > digit3) {
            int temp = digit2;
            digit2 = digit3;
            digit3 = temp;
        }
        if (digit2 > digit4) {
            int temp = digit2;
            digit2 = digit4;
            digit4 = temp;
        }
        if (digit2 > digit5) {
            int temp = digit2;
            digit2 = digit5;
            digit5 = temp;
        }
        if (digit3 > digit4) {
            int temp = digit3;
            digit3 = digit4;
            digit4 = temp;
        }
        if (digit3 > digit5) {
            int temp = digit3;
            digit3 = digit5;
            digit5 = temp;
        }
        if (digit4 > digit5) {
            int temp = digit4;
            digit4 = digit5;
            digit5 = temp;
        }
        printf("Permutations: %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d, %d %d %d %d %d\n",
               digit1, digit2, digit3, digit4, digit5, digit1, digit2, digit3, digit5, digit4, digit1, digit3, digit2, digit5, digit4,
               digit2, digit1, digit3, digit4, digit5, digit2, digit3, digit1, digit4, digit5, digit3, digit1, digit2, digit5, digit4,
               digit3, digit2, digit1, digit4, digit5, digit3, digit4, digit1, digit2, digit5, digit3, digit1, digit4, digit2, digit5,
               digit2, digit3, digit1, digit5, digit4, digit2, digit3, digit4, digit1, digit5, digit3, digit1, digit2, digit5, digit4,
               digit3, digit2, digit1, digit5, digit4, digit3, digit4, digit1, digit2, digit5, digit3, digit1, digit4, digit2, digit5,
               digit2, digit3, digit1, digit5, digit4, digit3, digit4, digit1, digit2, digit5, digit3, digit1, digit4, digit2, digit5);
    }

    return 0;
}