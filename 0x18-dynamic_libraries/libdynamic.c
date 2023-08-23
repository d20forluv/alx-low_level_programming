#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
	return (a + b);
}

int subtract(int a, int b)
{
	return (a - b);
}

int multiply(int a, int b)
{
	return (a * b);
}

int divide(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	} else
	{
		return (0);
	}
}

greet(void)
{
	printf("Hello, world!\n");
}

char* concatenate(const char* str1, const char* str2)
{
	char* result = malloc(strlen(str1) + strlen(str2) + 1);
	strcpy(result, str1);
	strcat(result, str2);
	return result;
}

