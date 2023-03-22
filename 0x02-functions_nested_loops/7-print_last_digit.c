#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number that we will print the last digit from.
 *
 * Return: the last digit of the number.
 */
int print_last_digit(int n)
{
	last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
