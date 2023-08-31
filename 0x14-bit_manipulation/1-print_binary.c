#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int mask = 1UL << 63;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (!count)
	{
		_putchar('0');
	}
}
