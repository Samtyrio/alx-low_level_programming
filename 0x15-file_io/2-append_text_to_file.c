#include "main.h"

/**
 * append_text_to_file - appends text to a file end part
 * @filename: pointer to the file
 * @text_content: contents of the file
 * Return: what is needed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, status;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		status = write(fp, text_content, strlen(text_content));
		if (status == -1)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
