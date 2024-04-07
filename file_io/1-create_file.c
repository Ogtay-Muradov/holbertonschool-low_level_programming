#include "main.h"
#include <string.h>

/**
 * create_file - creates a file in a current dir if not exist, otherwise trunc.
 * @filename: name of file
 * @text_content: contents
 * Return: 1 in success, -1 in error.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);

	if (fd == -1)
		fd = open(filename, O_RDWR | O_TRUNC);
	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1 || w < len)
		return (-1);

	return (1);
}
