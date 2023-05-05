#include "main.h"

/**
  * flip_bits - count num of bits i ned to flip to get on num
  * @n: for number
  * @m: for num to flip n
  *
  * Return: the necessary num bit to flip get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
