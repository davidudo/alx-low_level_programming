#include "function_pointers.h"

/**
 * array_iterator - executes a function on each array element
 * @array: array of elements to execute on
 * @action: pointer to function to be executed
 * @size: number of elements to be printed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size < 1) {}

	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
