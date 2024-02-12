#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file
 * @text_content: content of the file
 * Return: what is needed
 */

int create_file(const char *filename, char *text_content)
{
	int fp, status;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
