#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t n = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_RDWR, 0664);
	if (fd == -1 || access(filename, W_OK) == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	n = write(fd, text_content, i);
	close(fd);
	if (n < 0)
	{
		return (-1);
	}
	return (1);
}
