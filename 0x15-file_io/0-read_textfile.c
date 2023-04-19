#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads the text file
 *
 * @fn: File to read
 *
 * @ltrs: Number of letters
 *
 * Return: Number of letters it can read and print
 */
ssize_t read_textfile(const char *fn, size_t ltrs)
{
	int j;
	char *b;
	ssize_t read_cnt, write_cnt;

	if (fn == NULL)
		return (0);
	j = open(fn, O_RDONLY);
	if (j == -1)
		return (0);

	b = malloc(ltrs);
	if (!b)
		return (0);
	read_cnt = read(j, b, ltrs);
	if (read_cnt == -1)
		return (0);

	write_cnt = write(STDOUT_FILENO, b, read_cnt);

	close(j);
	free(b);

	if (read_cnt != write_cnt)
		return (0);

	return (write_cnt);
}
