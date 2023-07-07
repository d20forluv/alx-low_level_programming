#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	ssize_t bytes_written = fwrite(2, message, sizeof(message) - 1);
	if (bytes_written == -1)
	{
		return (1);
	}
	return (0);
}

