#include "main.h"

/**
 * clear_bit - function that change to 0 the bit of a given index
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	m = ~m;
	*n = *n & m;
	return (1);
}
