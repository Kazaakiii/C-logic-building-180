/*
 * Program 051: Profit or loss from cost and selling price
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o profit_or_loss 051_profit_or_loss.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double cp = 500, sp = 650;
    if (sp > cp) printf("Profit of %.2f\n", sp - cp);
    else if (cp > sp) printf("Loss of %.2f\n", cp - sp);
    else printf("No profit, no loss\n");
    return 0;
}
