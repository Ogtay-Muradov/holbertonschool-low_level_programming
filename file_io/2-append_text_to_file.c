#include "main.h"

/**
 * append_text_to_file - writes content to the end of file
 * @filename: name of file
 * @text_content: content
 * Return: 1 in success, -1 in error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);


	w = write(fd, text_content, len);
	if (fd == -1 || w == -1 || w < len)
		return (-1);
	close(fd);
	return (1);
}
