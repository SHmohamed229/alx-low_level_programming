#include "main.h"

/**
  * get_endianness - go to check the endiannes
  *
  * Return: for big 0 , for little 1.
*/
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);
	return (0);
}
