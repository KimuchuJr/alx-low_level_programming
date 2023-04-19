#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

long _strlen(char *str);
/**
 * create_file - create a file
 *
 * @fn: File name
 *
 * @text_content: Terminated string
 *
 * Description: The file must have rw------- permissions
 *
 * Return: 1 (Success), -1 (NULL)
 */

int create_file(const char *fn, char *text_content)
{
	int j;
	long len, write_cnt;

	j = open(fn, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (j == -1 || fn == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		write_cnt = write(j, text_content, len);
		if (write_cnt == -1)
			return (-1);
	}
	close(j);

	return (1);
}

/**
 * _strlen - compute the length of a string
 *
 * @str: the string to process
 *
 * Return: length of the string
 */
long _strlen(char *str)
{
	long len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}
