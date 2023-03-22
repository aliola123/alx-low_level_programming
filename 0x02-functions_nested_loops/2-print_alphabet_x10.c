#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowrcase 10x
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		{
		for (j < 10)
			_putchar(i);
			i++;
		}
	}
	return (0);
}
