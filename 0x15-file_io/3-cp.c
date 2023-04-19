#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Argument count
 *
 * @argv: Command line arguments
 *
 * Description: - Permissions of the created file are rw-rw-r--
 *
 * Return: 0 (success)
 *
 */
int main(int argc, char **argv)
{
	int f_from, f_to;
	long read_cnt, write_cnt;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_cnt = read(f_from, buffer, 1024)) != 0)
	{
		if (read_cnt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_cnt = write(f_to, buffer, read_cnt);
		if (write_cnt == -1 || (write_cnt != read_cnt))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(f_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	if (close(f_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);

	return (0);
}
