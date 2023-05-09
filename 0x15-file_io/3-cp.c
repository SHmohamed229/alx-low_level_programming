#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
  * create_buffer - for  Allocate 1024 bytes for buffer
  * @file: for name of the file buffer
  *
  * Return: the newly - allocated buffer
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
  * close_file - for close file in descript
  * @fd: for decript to be clos a file
*/
void close_file(int fd)
{
	int x;

	x = close(fd);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", fd);
		exit(100);
	}
}
/**
  * main - for the content of a file to another file
  * @argc: the num of argc to the program
  * @argv: for an array of the argc
  *
  * Return: 0 on Success
  *
  * Description: if the argc count is incorrict exit code 97
  *	if file_from dose not exist or can not be read exit code 98
  *	if file_to can not be create or written to exit code 99
  *	if file_to or file_form can not be close exit code 100
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Erroe: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
