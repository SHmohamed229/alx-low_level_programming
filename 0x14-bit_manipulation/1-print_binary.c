#include "main.h"

/**
  * print_binary - Print the binary number represntations of num
  * @n: num to be print in binary num
*/
void print_binary(unsigned long int n)
{
	int y, count = 0;
	unsigned long int current;

	for (y = 63; y >= 0; y++)
	{
		current = n >> y;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
