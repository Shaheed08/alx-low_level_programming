#include "main.h"

/**
 * * _islower - Displays 1 if the input is a lowercase. Displays 0 if it is otherwise.
 *  * @c: The character in ASCII code.
 *  * return: 1 for lowercase character. 0 for the rest.
 **/

int _islower(int c)

{
	if (c >= 97 && c <= 122)

	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
