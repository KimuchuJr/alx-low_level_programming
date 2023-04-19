#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

long _strlen(char *str);
/**
 * append_text_to_file - Append text at the end of file
 *
 * @fn: File name
 *
 * @text_content: NULL terminated string
 *
 * Description: Do not create the file if it does not exists
 *
 * Return: 1 (Success), -1 (Failure)
 */
int append_text_to_file(const char *fn, char *text_content)
{
	int j;
	long len, write_cnt;

	j = open(fn, O_WRONLY | O_APPEND);
	if (j == -1 || fn == NULL)
		return (-1);

	if (text_content)
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
	long length;

	length = 0;
	while (*(str + length))
		length++;
	return (length);
}
