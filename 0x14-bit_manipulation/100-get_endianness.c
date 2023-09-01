#include "main.h"

/**
 * get_endianness -  these checks if the machine is little or big endian
 * Return: returns 0 for big, and 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
