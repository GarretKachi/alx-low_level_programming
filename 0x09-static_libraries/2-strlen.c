#include "main.h"
/**
 * _strlen - This returns the length of a string
 * @s: D string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
