#include <stdio.h>
#include "main.h"

/**
 * set_bit - Function that help set bit value to 1 when called upon.
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: number.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
