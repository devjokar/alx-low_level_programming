#include "search_algos.h"

/**
 * _rsearch - search for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int _rsearch(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (_rsearch(array, half, value));

	half++;
	return (_rsearch(array + half, size - half, value) + half);
}

/**
 * binary_search - wrap_rsearch and return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = _rsearch(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

/**
 * exponential_search - search for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	int index, next, result;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;
	while (array[index] < value && index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index *= 2;
	}

	next = (index >= (int)size) ? (size - 1) : index;
	index /= 2;
	printf("Value found between indexes [%d] and [%d]\n", index, next);
	result = binary_search(array + index, (next + 1) - index, value);
	if (result >= 0)
		result += index;

	return (result);
}
