#include "main.h"
/**
 * create_file -  creates a file.
 * @filename:..
 * @text_content:..
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, len = 0;
	char *buf;
	ssize_t n;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = creat(filename, S_IRUSR | S_IWUSR);
		exit(0);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (fd == -1 || chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}
	while (text_content[i] != '\0')
	{
		len++;
		i++;
	}
	buf = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (text_content[i] != '\0')
	{
		buf[i] = text_content[i];
		i++;
	}
	buf[i] = '\0';
	n = write(fd, buf, (len + 1));
	if (n == -1)
	{
		free(buf);
		return (-1);
	}
	close(fd);
	free(buf);
	return (1);
}
