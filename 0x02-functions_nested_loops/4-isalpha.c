#include "main.h"

/**
* * _isalpha- Displays 1 if the input is an alphabet. Otherwise display 0.
* * @c: The character in ASCII code.
* * Return: Returns the value 1 for alphabet and 0 for the rest.
**/

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
