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
 * bubble_sort - sort an array using bubble sort algo
 * @array: pointer to the array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(array, j, j + 1);
print_array(array, size);
}
}
}
}
