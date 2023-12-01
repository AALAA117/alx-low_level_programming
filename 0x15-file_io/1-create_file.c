#include "main.h"
/**
 * create_file -  creates a file.
 * @filename:..
 * @text_content:..
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t n = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	n = write(fd, text_content, i);
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
