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
	int fp, nletters, rer;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY || O_APPEND);

	if (fp == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters];)
			nletters++;
	}
		rer = write(fp, text_content, nletters);
		if (rer == -1)
			return (-1);

	close(fp);
	return (1);
}
