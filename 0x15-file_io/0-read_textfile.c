#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: pointer to the file
 * @letters: num of letters
 * Return: what is needed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, rd;
	char *buf;
	ssize_t print = 0;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(fp, buf, 1);
	while (rd > 0 && print < (ssize_t)letters)
	{
		print += write(STDOUT_FILENO, buf, 1);
		rd = read(fp, buf, 1);
	}

	close(fp);
	return (print);
}
