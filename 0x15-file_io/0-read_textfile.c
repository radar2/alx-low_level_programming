#include "main.h"
/**
 * read_textfile - read files w/ open/read, write text to stdout
 * @filename: name of file passed to be read
 * @letters: num of characters read in
 * Return: number of letters written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *contents;
	ssize_t bytes, printed_letters;
	int file_d;

	contents = malloc(letters + 1);

	if (contents == NULL)
		return (0);

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);


	bytes = read(file_d, contents, letters);
	if (bytes == -1)
	{
		close(file_d);
		free(contents);
		return (0);
	}
	contents[bytes] = '\0';

	printed_letters = write(STDOUT_FILENO, contents, bytes);
	if (printed_letters == -1)
	{
		close(file_d);
		free(contents);
		return (0);
	}
	close(file_d);
	free(contents);
	return (printed_letters);
}
