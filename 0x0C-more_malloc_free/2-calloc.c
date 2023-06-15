#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @a: the char to copy
 * @b: the number of times to copy a
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char a, unsigned int b)
{
	unsigned int i;

	for (i = 0; i < b; i++)
	{
		s[i] = a;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

