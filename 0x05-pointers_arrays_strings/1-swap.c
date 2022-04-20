#include "main.h"
/**
 * swap_int - take in two variable integers and swaps them
 *
 * @a: swaps and stores address of b
 *
 * @a: swaps and stores address of a
 *
 * Return: 0
*/

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
