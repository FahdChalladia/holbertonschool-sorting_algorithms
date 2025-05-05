#include "sort.h"
#include <stdio.h>

/**
 * swap - Swap two elements in an array
 * @array: The array where the elements will be swapped
 * @i: The index of the first element to swap
 * @j: The index of the second element to swap
 *
 */
void swap(int *array, int i, int j , size_t size)
{
int temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}

/**
 * lomuto_partition - Lomuto partition scheme
 * @array: Array of integers
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 *
 * Return: Index of the pivot after partition
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
int i, j, pivot;
pivot = array[high];
i = low - 1;
for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
swap(array, i, j, size);
}
}
swap(array, i + 1, high, size);
return (i + 1);
}

/**
 * quick_sort_recursive - Recursively sorts the array using Lomuto partition
 * @array: Array of integers
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int pivot_index;
if (low < high)
{
pivot_index = lomuto_partition(array, low, high, size);
quick_sort_recursive(array, low, pivot_index - 1, size);
quick_sort_recursive(array, pivot_index + 1, high, size);
}
}

/**
 * quick_sort - Sorts an array using Quick sort
 * @array: Array of integers
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_recursive(array, 0, size - 1, size);
}
