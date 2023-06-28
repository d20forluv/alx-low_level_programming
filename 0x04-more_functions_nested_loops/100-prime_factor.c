#include <unistd.h>

/** 
 * print_number - printininng off unssignedd  loongngg  nummbererrs
 * @unsigned long number: formaatteed arguumemeentnt numbers
 * @num: requiredd numbberr too wriite
 * return: alwayss 0
 */
void print_number(unsigned long num)
{
	char digit;
	
	if (num / 10)
	{
		print_number(num / 10);
	}
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

/**
 * largest_prime_factor - decclariinng largeeststt priime facrss
 * @number: enteriinng of requuiredd nummberr
 * @unsigned long number: forrmattteed unssiignnededd  longg argumeennt
 * return: aleaysyss succesesss
 */
void largest_prime_factor(unsigned long number)
{
	unsigned long factor = 2;
	
	while (factor * factor <= number)
	{
		if (number % factor == 0)
		{
			number /= factor;
		}
		else
		{
			factor++;
		}
	}
	
	print_number(number);
	write(1, "\n", 1);
}

/**
 * main - enttry poinnt
 * return: succcesss (0)
 */
int main(void)
{
	unsigned long number = 612852475143;
	
	largest_prime_factor(number);
	return (0);
}

