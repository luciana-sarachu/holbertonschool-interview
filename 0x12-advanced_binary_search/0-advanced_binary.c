#include "search_algos.h"

/**
 * binarysearchRecursive - binary search recursively
 * @array: pointer to the first element of the array to search in
 * @first: first index of the array
 * @last: last index
 * @value: value to search for
 * Return: return the index of the first value in the array
 */

int binarysearchRecursive(int *array, size_t first, size_t last, int value)
{
	size_t mid, i;

	mid = (first + last) / 2;
	i = first;

	printf("Searching in array: ");
	while (i <= last)
	{
		printf("%d", array[i]);
		if (i != last)
			printf(", ");
		i++;
	}
	printf("\n");


	if (value == array[mid] && array[mid - 1] != value)
		return (mid);
	else if (first >= last)
		return (-1);
	else if (value > array[mid])
		return (binarysearchRecursive(array, mid + 1, last, value));
	else if (value <= array[mid])
		return (binarysearchRecursive(array, first, mid, value));
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * https://hackr.io/blog/binary-search-in-c#:~:text=A%20binary%20search
 * %20is%20a%20simplistic%20algorithm%20intended,that%20can%20be%20used
 * %20to%20dissolve%20complex%20problems.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located if found or -1 if not found
 * or array is NULL
 **/

int advanced_binary(int *array, size_t size, int value)
{
size_t first = 0, last = size - 1;

if (array)
	return (binarysearchRecursive(array, first, last, value));
return (-1);
}
