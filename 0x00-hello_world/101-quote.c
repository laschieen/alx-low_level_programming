#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error using the write()
 * function without using the printf() family or puts() family of functions.
 *
 * Return: Always returns 1 to indicate an error occurred.
 */
int main(void)
{
	const char message[] =
	    "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int message_size = sizeof(message) - 1;

	write(STDERR_FILENO, message, message_size);

	return (1);
}
