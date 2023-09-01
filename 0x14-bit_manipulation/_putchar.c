#include "main.h"
#include <unistd.h>
/**
 * _putchar - Will write the characters c to stdout
 * @c: That is the character to print
 *
 * Return: returns 1. on success
 * On error, it returns -1, then errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

