#include "main.h"

/**
 * print_last_digit- Displays the last
 * digit of a number.
 * @n: input number is an integer.
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
	_putchar(-l + 48);
	return (-l);
	}
	else if
	{
	_putchar(l + 48);
	return (1);
	}
	else
	{
	_putchar(0 + 48);
	return (0);
	}
}
