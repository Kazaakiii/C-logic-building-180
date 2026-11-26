/*
 * Program 180: Calculator using function pointers
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o function_pointer_calculator 180_function_pointer_calculator.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main(void) {
    int (*ops[3])(int, int) = {add, sub, mul};
    const char *names[] = {"add", "sub", "mul"};
    for (int i = 0; i < 3; i++)
        printf("%s(12, 4) = %d\n", names[i], ops[i](12, 4));
    return 0;
}
