#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @d: the number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int d)
{
	void *ptr;

	ptr = malloc(d);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

