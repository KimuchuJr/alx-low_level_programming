#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

long my_strlen(char *str);
/**
 * append_text_to_file - Append file text
 *
 * @filename: File name
 * @text_content: NULL terminated string to append to the file
 *
 * Description: Do not create the file if it doesn't exist
 *		If text_content is NULL, don't add anything
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, bytes_written;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(f, text_content, my_strlen(text_content));
		if (bytes_written == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}

/**
 * my_strlen - compute the length of a string
 *
 * @str: the string to process
 *
 * Return: length of the string
 */
long my_strlen(char *str)
{
	long len = 0;

	while (*str++)
		len++;
	return (len);
}

