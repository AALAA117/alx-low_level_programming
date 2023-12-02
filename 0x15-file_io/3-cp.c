#include "main.h"

/**
 * main - check the code
 * @argc:..
 * @argv:..
 * Return: Always 0.
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int fd1, fd2, c;
	ssize_t n, bytes;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1 || access(argv[1], R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);
	if (fd2 == -1 || access(argv[2], W_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}
	while((n = read(fd1, buff, sizeof(buff))) > 0)
	{
		bytes = write(fd2, buff, n);
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c = close(fd1);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	c = close(fd2);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
