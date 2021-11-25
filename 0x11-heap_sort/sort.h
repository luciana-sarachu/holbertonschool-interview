#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void swap_values(int *array, int s, int largest, int size);
void heapify(int *array, int s, int i, int size);

#endif
