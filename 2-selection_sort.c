#include "sort.h"
#include <stddef.h>
/**
 * swap - swap two integres
 * @arr: pointer to the array
 * @i: 1st case adress
 * @j: sec case adress
 */
void swap(int *arr, int i, int j)
{
int temp;
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}

/**
 * selection_sort - sorts an array of integers with Selection sort algorithm
 * @array: pointer to the array
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
size_t i, j;
int min_idx;
{
for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
{
min_idx = j;
}
}
swap(array, i, min_idx);
if (i < size - 2)
{
print_array(array, size);
}
}
}
}
