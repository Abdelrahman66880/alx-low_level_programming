#include "search_algos.h"
#include <math.h>

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int BinarySearch(int *array, int low, int high, int value)
{
	int i;
	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return mid;
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}


/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
*/

int exponential_search(int *array, size_t size, int value)
{
	int result;
	int i;
	i = 0;
	printf("Value checked array[%i] = [%i]\n", i, array[i]);
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	i = 1;
	while (i < (int)size && array[i] <= value)
	{
		i = i * 2;
		if(i < (int)size)
		{
            		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		}
	}
	result = i / 2;
	printf("Value found between indexes [%i] and [%i]\n", i/2, result);
	return BinarySearch(array, result, 15, value);
}
