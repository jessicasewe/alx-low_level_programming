#include "main.h"

/**
 * ste_bit - sets a bit at agiven index to 1
 * @n: pointer to the number to change
 * @index:index of the but to set to 1
 *
 * Return: 1 for a success , -1 for failure
 */
int set_bit(unisgned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) |*n);
	return (1);
}
