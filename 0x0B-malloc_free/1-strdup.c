#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars.
 */

char *_strdup(char *str)
{
	char *fmr;
	unsigned int i, j;

	if (fmr == NULL)
		return (NULL);

	for (i = 0; fmr[i] != '\0'; i++)

	fmr = (char *)malloc(sizeof(char) * (i + 1));

	if (fmr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		fmr[j] = str[j];

	return (fmr);
}
