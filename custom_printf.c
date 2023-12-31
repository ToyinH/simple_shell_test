#include "simple_shell.h"

/**
 * _printf - this function prints the supplied string
 * to the specified STDOUT
 * @str_in: the string to be printed
 * Return: void
 */

void _printf(char *str_in)
{
	size_t str_len;

	str_len = _strlen(str_in);
	write(STDOUT_FILENO, str_in, str_len);
}
