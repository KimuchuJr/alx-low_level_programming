#include "main.h"

/**
 * string_toupper - This function will change all lowercase letters
 * of a string to uppercase
 * @strn: The string to be changed
 * Return: The resultan string
 */
char *string_toupper(char *strn)
{
	int k;

	for (k = 0; strn[k] != '\0'; ++k)
	{
		if (strn[k] >= 'a' && strn[k] <= 'z')
			strn[k] -= 32;
	}
	return (strn);
}
