#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block with malloc and free
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: size of of allocated space in bytes for @ptr
 * @new_size: size of new allocated memory block
 *
 * Return: @ptr
 * If new_size equals old_size, return @ptr
 * If new_size equals 0 && ptr is not NULL, return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
