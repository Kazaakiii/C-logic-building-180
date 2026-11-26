/*
 * Program 044: Calculator using switch
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o simple_calculator 044_simple_calculator.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double a = 12, b = 4;
    const char ops[] = "+-*/";
    for (int i = 0; ops[i] != '\0'; i++) {
        switch (ops[i]) {
            case '+': printf("%.0f + %.0f = %.2f\n", a, b, a + b); break;
            case '-': printf("%.0f - %.0f = %.2f\n", a, b, a - b); break;
            case '*': printf("%.0f * %.0f = %.2f\n", a, b, a * b); break;
            case '/':
                if (b != 0) printf("%.0f / %.0f = %.2f\n", a, b, a / b);
                else printf("Division by zero\n");
                break;
        }
    }
    return 0;
}
