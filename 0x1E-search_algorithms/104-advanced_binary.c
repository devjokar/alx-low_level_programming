#include "search_algos.h"

/**
 * _rsearch - search for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int _rsearch(int *array, size_t size, int value)
{
	size_t i, half = size / 2;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (_rsearch(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (_rsearch(array, half + 1, value));

	half++;
	return (_rsearch(array + half, size - half, value) + half);
}

/**
 * advanced_binary - wrap _rsearch and return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = _rsearch(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
