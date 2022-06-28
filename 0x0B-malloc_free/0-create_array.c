#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: variable of type char.
 * Return: pointer of an array of char.
 */

char *create_array(unsigned int size, char c)
{
	char *pm;
	unsigned int i;

	if (size == 0)
		return (NULL);

	pm = malloc(sizeof(c) * size);

	if (pm == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pm[i] = c;

	return (pm);
}
