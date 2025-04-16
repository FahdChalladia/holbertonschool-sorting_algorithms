#include "sort.h"
/**
 * lomuto_partition - partitions the array using Lomuto's scheme.
 * @array: array of integers.
 * @size: size of the array.
 * @low: starting index of the partition.
 * @high: ending index of the partition.
 *
 * Return: index of the pivot element after partitioning.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
int temp, i, pivot, j;
pivot = array[high];
i = low - 1;
for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);
return (i + 1);
}

/**
 * quick_sort_helper - recursively sorts the array using Quick sort.
 * @array: array of integers.
 * @size: size of the array.
 * @low: starting index of the partition.
 * @high: ending index of the partition.
 */
void quick_sort_helper(int *array, size_t size, int low, int high)
{
int pivot_index;
if (low < high)
{
pivot_index = lomuto_partition(array, size, low, high);
quick_sort_helper(array, size, low, pivot_index - 1);
quick_sort_helper(array, size, pivot_index + 1, high);
}
}

/**
 * quick_sort - main function to sort the array using Quick sort.
 * @array: array of integers.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
quick_sort_helper(array, size, 0, size - 1);
}
