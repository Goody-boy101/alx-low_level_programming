#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *test_bytes = (char *)&test_value;

	return (*test_bytes);
}
