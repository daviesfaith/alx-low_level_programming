#include "main.h"

/**
 * set_bit - this will set a bit at a given index to 1 (whole number)
 * @n: this is the pointer to the number to change
 * @index: this is the index of the bit to set to 1
 *
 * Return: return 1 for success, and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

