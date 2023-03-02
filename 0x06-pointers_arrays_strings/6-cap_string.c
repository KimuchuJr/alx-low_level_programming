#include "main.h"

int is_separator(char ch);
/**
 * cap_string - capitalize all words
 *
 * @str: string to be processed
 *
 * Description: separators of words
 *              space, tab, new line or from the set ,.;!?"(){}
 *
 * Return: the resultant string
 */
char *cap_string(char *str)
{
	int p;

	p = 0;
	if (str[p] >= 97 && str[p] <= 122)
		str[p] -= 32;
	for (p = 1; str[p] != '\0'; ++p)
	{
		if (is_separator(str[p - 1]))
			if (str[p] >= 97 && str[p] <= 122)
				str[p] -= 32;
	}
	if (str[p - 1] >= 97 && str[p - 1] <= 122)
		str[p - 1] -= 32;
	return (str);
}

/**
 * is_separator - check whether a character is a separator
 *
 * @ch: the character to be checked
 *
 * Return: 1 if it's a separator, otherwise 0
 */
int is_separator(char ch)
{
	char separators[] = " \n\t.,;!?\"(){}";
	int p;

	for (p = 0; separators[p] != '\0'; ++p)
	{
		if (separators[p] == ch)
			return (1);
	}
	return (0);
}
