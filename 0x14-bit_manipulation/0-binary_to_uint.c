#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if invalid input or overflow
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);

		dec_val = (dec_val << 1) + (b[i] - '0');
		i++;
	}

	return (dec_val);
}
