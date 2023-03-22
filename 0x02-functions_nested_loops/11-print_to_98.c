#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start from
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
		_putchar('0' + n);
}
