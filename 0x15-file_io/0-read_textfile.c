#include "main.h"
/**
 * read_textfile - reads a text file and prints it standard output.
 * @filename: name of file
 * @letters:..
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int n_bytes, fd2;
	int n;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		exit(1);
	}
	fd2 = open(filename, O_RDONLY | O_CREAT, S_IRUSR);
	if (fd2 == -1)
	{
		return (0);
	}
	n_bytes = read(fd2, buf, letters);
	if (n_bytes < 0)
	{
		close(fd2);
		return (0);
	}
	n = write(STDOUT_FILENO, buf, letters);
	if (n < 0)
	{
		return (0);
	}
	close(fd2);
	free(buf);
	return (letters);
}
