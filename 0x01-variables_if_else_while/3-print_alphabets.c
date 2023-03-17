#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i].toupper());
	}

	putchar('\n');
	return (0);
}
