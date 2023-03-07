#include"stdio.h"


BennettDixon
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x06-pointers_arrays_strings/3-strspn.c
@BennettDixon
BennettDixon string span, custom strspn
 1 contributor
31 lines (30 sloc)  526 Bytes
/**
 * _strspn - finds length of prefix substring
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: n bytes in intial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int consistC = 0;
	int prevC;

	while (*s)
	{
		i = 0;
		prevC = consistC;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				consistC++;
			i++;
		}
		if (prevC == consistC) /* didn't equal a char from accept */
			break;
		s++;
	}
	return (consistC);
}
