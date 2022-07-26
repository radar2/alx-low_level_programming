#include "main.h"
/**
 * _strlen - get length of string
 * @str: string passed
 * Return: length of str
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * append_text_to_file - writes text to end of file
 * @filename: file given
 * @text_content: text to write
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file_d, bytes, len = 0;

	if (!filename)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		bytes = write(file_d, text_content, len);
		if (bytes == -1 || bytes != len)
			return (-1);
	}
	close(file_d);
	return (1);
}
