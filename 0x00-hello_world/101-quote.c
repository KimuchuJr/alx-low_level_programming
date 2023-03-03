#include <unistd.h>

/**
* main - Program start
* Description: Prints a quote text
* Return: Returns (1) this time
*/

int main(void)
{
	write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
