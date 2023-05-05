#include "main.h"

/**
  * set_bit - set value bit at comm given index to 1
  * @n: a pointer to bit
  * @index: the index Set value start at 0
  *
  * Return: if an errors occurs -1 , other - 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
		return (1);
}
