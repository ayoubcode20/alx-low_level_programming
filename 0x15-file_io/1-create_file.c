#include "main.h"

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
	char buff[BUFF_SIZE * 8];

	if (!filename)
		return (-1);
	if (text_content)
		buff = NULL;
	else
		buff = text_content;
	fd = open(filename, O_WDONLY);
	if (fd == -1)
		fd = open(filename, O_WDONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (buff)
		write(fd, buff, )
}
