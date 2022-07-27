#include "main.h"

/**
 * err_status - prints error and status to stderr
 * @msg: message to write
 * @file: file to write to
 * @exitstat: exit status given
 */
void err_status(char *msg, char *file, int exitstat)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file);
	exit(exitstat);
}
/**
 * main - copies contents of file one to file two
 * @ac: number of arguments passed
 * @av: pointer to list of passed strings
 * Return: 1 on success
 */
int main(int ac, char **av)
{
	ssize_t file_d_write, file_d_read, read_bytes, write_bytes;
	int isbig = 1;

	char buf[1024];

	if (ac != 3)
		err_status("Usage: cp file_from file_to", "", 97);

	file_d_write = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_d_write == -1)
		err_status("Error: Can't write to ", av[2], 99);

	file_d_read = open(av[1], O_RDONLY);
	if (file_d_read == -1)
		err_status("Error: Can't read from file ", av[1], 98);
	while (isbig)
	{
		read_bytes = read(file_d_read, buf, 1024);
		if (read_bytes == -1)
			err_status("Error: Can't read from file ", av[1], 98);

		write_bytes = write(file_d_write, buf, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
			err_status("Error: Can't write to ", av[2], 99);

		if (write_bytes != 1024)
			isbig = 0;
	}
	if (close(file_d_read))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int)file_d_read);
		exit(100);
	}
	if (close(file_d_write))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int)file_d_write);
		exit(100);
	}
	return (0);
}
