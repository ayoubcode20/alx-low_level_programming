#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: the file
 * @text_content: the content to append
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int len = _strlen(text_content);
	int bytes;

	if (!filename)
		return (-1);
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (!len)
		return (1);
	bytes = write(fd, text_content, len);
	if (bytes == -1 || bytes != len)
		return (-1);
	return (1);
}
