#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code for a digit (0 to 9) .
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
