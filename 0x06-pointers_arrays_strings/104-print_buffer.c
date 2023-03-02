#include <stdio.h>

int main(void)
{
	printf("Tons of printf lines\n");

	// 1. Somehow buffer the output up until this point

	printf("The size of the buffer is: %i\n", SIZEOFBUFFER); // 2. Get and print the size of the buffer.

	printf("Here is the output:\n\n%s", BUFFER); // 3. Print the buffer.

	return 0;
}
