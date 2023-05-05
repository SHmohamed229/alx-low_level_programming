#include "main.h"

/**
  * print_binary - Print the binary number represntations of num
  * @n: num to be print in binary num
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
