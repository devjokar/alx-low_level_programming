#include "main.h"

/**
 * set_bit - function that change to 1 the bit of a given index
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = *n | m;
	return (1);
}
