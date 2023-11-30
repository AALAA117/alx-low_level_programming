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
	int fd, fd2;
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
	fd2 = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd2 == -1)
	{
		return (0);
	}
	fd = read(fd2, buf, letters);
	if (fd < 0)
	{
		return (0);
	}
	n = write(STDOUT_FILENO, buf, letters);
	if (n < 0)
	{
		return (0);
	}
	return (letters);
}
