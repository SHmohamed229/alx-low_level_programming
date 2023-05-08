#include "main.h"
#include <stdlib.h>

/**
  * read_textfile- this function can to Read text file and print to STDOUT
  * @filename: text file print read
  * @letters: num of letter read
  * Return: w- for actual num of bytes read and print
  *	0 - when filename is NULL or function fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *per;
	ssize_t fp;
	ssize_t w;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	per = malloc(sizeof(char) * letters);
	t = read(fp, per, letters);
	w = write(STDOUT_FILENO, per, t);

	free(per);
	close(fp);
	return (w);
}
