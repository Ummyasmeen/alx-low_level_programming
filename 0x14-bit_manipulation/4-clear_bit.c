#include "main.h"

/**
 * clear_bit - this sets the value of a given bit to be  0
 * @n: the pointer to the number to be  change
 * @index: index of the bit to be cleared
 *
 * Return: 1 success, -1  failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

