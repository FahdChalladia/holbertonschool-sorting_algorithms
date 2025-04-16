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
int i, j, min_idx, temp;
{
for (i = 0; i < N - 1; i++)
{
min_idx = i;
for (int j = i + 1; j < N; j++)
{
if (arr[j] < arr[min_idx])
{
min_idx = j;
}
}
swap(arr, i, min_idx);
print_array(array, size);
}
}
}
