/*
 * Program 173: Structure holding student details
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o structure_student 173_structure_student.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main(void) {
    struct Student s = {"Asha", 101, 87.5f};
    printf("Name : %s\nRoll : %d\nMarks: %.1f\n", s.name, s.roll, s.marks);
    return 0;
}
