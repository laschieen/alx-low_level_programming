#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (Error)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar,
	      2015-10-19\n";

	ssize_t len = sizeof(message) - 1;
	ssize_t bytes_written = write(STDERR_FILENO, message, len);
	return (bytes_written != len);
}
