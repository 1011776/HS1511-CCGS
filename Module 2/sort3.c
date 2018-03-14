// By Alistair Parkinson, z5218710
// WA-MWH, Marcus Handley
// 9/3/2018
// This program determines whether a year is a leap year

#include <stdio.h>
#include <stdlib.h>

int main() {
    int first, second, third;
    scanf ("%d %d %d", &first, &second, &third);

    if (first <= second && second < third) {
        printf("%d\n%d\n%d\n", first, second, third);
    } else if (first <= third && third <= second) {
        printf("%d\n%d\n%d\n", first, third, second);
    } else if (second <= first && first <= third) {
        printf("%d\n%d\n%d\n", second, first, third);
    } else if (second <= third && third <= first) {
        printf("%d\n%d\n%d\n", second, third, first);
    } else if (third <= first && first <= second) {
        printf("%d\n%d\n%d\n", third, first, second);
    } else {
        printf("%d\n%d\n%d\n", third, second, first);
    }

    return EXIT_SUCCESS;
}
