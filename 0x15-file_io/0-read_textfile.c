#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file
 *
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: Number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *use;
	ssize_t readc, writec;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	use = malloc(letters);
	if (!use)
		return (0);
	readc = read(f, use, letters);
	if (readc == -1)
		return (0);

	writec = write(STDOUT_FILENO, use, readc);

	close(f);
	free(use);

	if (readc != writec)
		return (0);

	return (writec);
}
