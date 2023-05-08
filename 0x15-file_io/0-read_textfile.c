#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @flnm: name of the file to read
 * @ltrs: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, otherwise 0 if
 * file cannot be opened or read, @filename is NULL, or if write fails or does
 * not write the expected amount of bytes
 */
ssize_t read_textfile(const char *flnm, size_t ltrs)
{
	int f;
	char *b;
	ssize_t rd_cnt, write_cnt;

	if (flnm == NULL)
		return (0);

	f = open(flnm, O_RDONLY);
	if (f == -1)
		return (0);

	b = malloc(sizeof(char) * ltrs);
	if (b == NULL)
		return (0);

	rd_cnt = read(f, b, ltrs);
	if (rd_cnt == -1)
	{
		free(b);
		close(f);
		return (0);
	}

	write_cnt = write(STDOUT_FILENO, b, rd_cnt);
	if (write_cnt == -1 || rd_cnt != write_cnt)
	{
		free(b);
		close(f);
		return (0);
	}

	free(b);
	close(f);

	return (write_cnt);
}

