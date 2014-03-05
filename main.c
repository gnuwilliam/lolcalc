/* 
 * File:   main.c
 * Author: William Oliveira <sudowilliam@gmail.com>
 *
 * Created on March 3, 2014, 1:36 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main() {
    // Declare variables
    int x;
    int y;
    int z;
    char ch;
    
    // Get the arithmetic operator
    printf("Type an arithmetic operation (e.g.: + - * /): ");
    ch = getchar();
    
    // Get the input value
    printf("Type 2 numbers separated by spaces: ");
    scanf("%d %d", &x, &y);
    
    // Handle the input data
    switch(ch) {
        case '+': z = sum(x, y); break;
        case '-': z = sub(x, y); break;
        case '*': z = mult(x, y); break;
        case '/': z = divide(x, y); break;
        default: z = sum(x, y);
    }
    
    // Prints the result
    printf("Result = %d\n", z);
    printf("Goodbye!\n");
    
    return 0;
}

