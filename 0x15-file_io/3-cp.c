#include "main.h"

void cp(int from, int to, char *realfile, char *copyingfile);

/**
 * main - main man
 * @argc: arg note
 * @argv: arg list
 * Return: what is needed
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, update;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY, 0664);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cp(file_from, file_to, argv[1], argv[2]);
	update = close(file_from);
	if (update == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	update = close(file_to);
	if (update == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	if (update == -1)
		exit(100);
	return (0);
}

/**
 * cp - copies from a file to another
 * @from: location of real file
 * @to: location of copying file
 * @realfile: The file to copy from
 * @copyingfile: The file to copy to
 * Return: what is needed
 */

void cp(int from, int to, char *realfile, char *copyingfile)
{
	char buffer[1024];
	int upt, rc;

	rc = read(from, buffer, 1024);
	while (rc != 0)
	{
		if (rc < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", realfile);
			exit(98);
		}

		upt = write(to, buffer, rc);
		if (upt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", copyingfile);
			exit(99);
		}
		rc = read(from, buffer, 1024);
	}
}
