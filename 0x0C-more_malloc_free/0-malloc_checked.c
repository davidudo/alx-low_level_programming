#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to the allocated memory
 * If malloc fails, status is equal to 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p != NULL)
		return (p);
	exit(98);
}
