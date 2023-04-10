#include "main.h"

int _strlen(const char *str);

/**
 * binary_to_uint - Converting binary number to unsigned int
 * @b: Pointer to string
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int denary, ind;
	int len;

	if (!b)
		return (0);
	ind = denary = 0;
	len = _strlen(b) - 1;
	while (len >= 0)
	{
		if (*(b + len) != '0' && *(b + len) != '1')
			return (0);
		denary |= (*(b + len) - '0') << ind;
		ind++;
		len--;
	}

	return (denary);
}

/**
 * _strlen - String length
 * @str: String
 * Return: String length
 */
int _strlen(const char *str)
{
	int len;
	for (len = 0; *(str + len); ++len)
		;
	return (len);
}
