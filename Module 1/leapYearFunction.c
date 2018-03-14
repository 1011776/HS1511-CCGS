// By Alistair Parkinson, z5218710 and Ashley Porter z5220543
// WA-MWH
// 9/3/2018
// This program determines whether a year is a leap year using a function

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define START_OF_GREG_CALENDAR 1582

int isLeapYear (int year);

int main () {
    int input;
    printf ("please enter the year you are interested in\n");
    scanf ("%d", &input);

    if (isLeapYear (input) == 1) {
        printf ("%d is a leap year!\n", input);
    } else {
        printf ("%d is not a leap year!\n", input);
    }
	
    return EXIT_SUCCESS;
}

int isLeapYear (int year) {	
    assert (year > START_OF_GREG_CALENDAR);
    int output;

    if (year % 400 == 0) {
        output = 1;
    } else if (year % 100 == 0) {
        output = 0;
    } else if (year % 4 == 0) {
        output = 1;
    } else {
        output = 0;
    }
	
    return output;
}
