#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low;
	int high;
	size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (low = 0, high = size - 1; low <= high;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos <= size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		} else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		} else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
