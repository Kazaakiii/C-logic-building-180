/*
 * Program 174: Find the topper from an array of structures
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o structure_array_topper 174_structure_array_topper.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct Student {
    char name[20];
    float marks;
};

int main(void) {
    struct Student list[4] = {
        {"Ravi", 72.5f}, {"Meera", 91.0f}, {"Karan", 85.5f}, {"Isha", 88.0f}
    };
    int top = 0;
    for (int i = 1; i < 4; i++)
        if (list[i].marks > list[top].marks) top = i;
    printf("Topper: %s with %.1f marks\n", list[top].name, list[top].marks);
    return 0;
}
