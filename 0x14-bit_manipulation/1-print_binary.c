#include <stdio.h>
#include "main.h"

/**
 * print_binary - this functiin print number binary rep.
 * Prototype: void print_binary(unsigned long int n);
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
