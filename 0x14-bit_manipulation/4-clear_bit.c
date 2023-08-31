#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success (bit cleared), -1 for failure (invalid index)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n &= ~(1UL << index);
		return (1);
	}

	return (-1);
}
