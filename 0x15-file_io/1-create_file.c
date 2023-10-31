#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: a string
 *
 * Return: the length
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * create_file - function that creates a file.
 * @filename: the file name
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = _strlen(text_content);
	char *buff = malloc(sizeof(char) * len);

	if (!filename || !buff)
		return (-1);
	if (!text_content)
		free(buff)
	else
		buff = text_content;
	fd = open(filename, O_WDONLY);
	if (fd == -1)
		fd = open(filename, O_WDONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (buff)
		write(fd, buff, len);
	close(fd);
	return (1);
}
