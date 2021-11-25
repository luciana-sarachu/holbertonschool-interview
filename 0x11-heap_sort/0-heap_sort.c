#include "sort.h"

/**
 * swap_values - swithc 2 values of a given list
 * @array: list of numbers
 * @s: index of the value1 to swap
 * @largest: index of the value2 to swap
 * @size: original len arr
 * Return: nothing
 */
void swap_values(int *array, int s, int largest, int size)
{
int temp = 0;

temp = array[s];
array[s] = array[largest];
array[largest] = temp;
print_array(array, size);
}

/**
 * heapify - organize the given list taking max heap
 * @array: list of integers
 * @s: lenth of the heap sort array
 * @i: parent node
 * @size: original len array
 * Return: nothing
 */
void heapify(int *array, int s, int i, int size)
{
int largest = i, left = (i * 2) + 1, rigth = (i * 2) + 2;

if (left < s && array[left] > array[largest])
	largest = left;

if (rigth < s && array[rigth] > array[largest])
	largest = rigth;
if (largest != i)
{
	swap_values(array, i, largest, size);
	heapify(array, s, largest, size);
}
}

/**
 * heap_sort - sorts an array of ints in ascending order
 * @array: list of integers
 * @size: lenth of array
 * Return: nothing
 */
void heap_sort(int *array, size_t size)
{
int i = 0, s = size;

for (i = (size / 2) - 1; i >= 0; i--)
	heapify(array, s, i, size);

for (i = size - 1; i >= 0; i--)
{
	if (i != 0)
		swap_values(array, i, 0, s);
	heapify(array, i, 0, s);
}
}
