#include "simple_shell.h"

/**
 * handl_getline - function to handle getline function
 *
 * Return: return string
 */

char *handl_getline()
{
	char *string = NULL;
	size_t n = 0;
	/** ssize_t char_num = getline(&string, &n, stdin); **/
	ssize_t char_num = custom_getline(&string, &n);

	if (char_num == -1)
	{
		free(string);
		exit(EXIT_SUCCESS);
	}
	return (string);
}
