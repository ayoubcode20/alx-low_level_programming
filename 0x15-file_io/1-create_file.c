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
	if (!filename)
		return (-1);
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	int len;

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
