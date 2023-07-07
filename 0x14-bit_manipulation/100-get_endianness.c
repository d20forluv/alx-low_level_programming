#include <stdio.h>
#include "main.h"

/**
 * get_endianness - thid function will check endloessly
 * Prototype: int get_endianness(void).
 * Return: 1, if architecture is small and 0 as otherwide.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
