#include "main.h"

/**
  * append_text_to_file - for append at the end of file
  * @filename: for filename
  * @text_content: for add content
  *
  * Return: if the file exists 1 ,
  *	if the fails dose not exist, Or if it fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;


	if (filename == NULL)
		return	(-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, len);
	if (fp == -1 || w == -1)
		return (-1);

	close(fp);
	return (1);
}
