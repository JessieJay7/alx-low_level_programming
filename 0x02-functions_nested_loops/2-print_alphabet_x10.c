#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
*/
void print_alphabet_x10(void)
{
int count = 0;
char letter;

while (count++ <= 9)
{
for (letter = 'a'; letter <= '2'; letter++)
_putchar(letter);
_putchar('\n');
}
}