#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number to be checked
 *
 * Description: This function prints + if n is greater than zero
 * prints 0 if n is zero
 * prints - if n is less than zero
 * Return: 1 if n > 0. -1 if n < 0. and 0 if n = 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
