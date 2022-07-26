#include "main.h"
/**
 * create_file - makes a file and fills it with contents
 * @filename: name of file passed
 * @text_content: text to write to file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t file_d, bytes, len;

	if (filename)
	{
		file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (file_d == -1)
			return (-1);
	}
	else
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		bytes = write(file_d, text_content, len);
		if (bytes == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
