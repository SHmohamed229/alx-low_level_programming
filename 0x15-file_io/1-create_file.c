#include "main.h"

/**
  * create_file - this function for creatin file
  * @filename: for the name of the file to create
  * @text_content: for to String to write to the file
  *
  * Return: function fails -1 , other 1.
*/
int create_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);

	if (fp == -1 || w == -1)
		return (-1);
	close(fp);
	return (1);
}
