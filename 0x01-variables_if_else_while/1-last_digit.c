#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %i is %i and is greater then 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
	return (0);
}i
