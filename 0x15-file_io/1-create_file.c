#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Description: Creating a file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, my_strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
 * my_strlen - compute the length of a string
 *
 * @str: the string to process
 *
 * Return: String length
 */
long my_strlen(char *str)
{
	long len = 0;

	while (*str++)
		len++;
	return (len);
}

