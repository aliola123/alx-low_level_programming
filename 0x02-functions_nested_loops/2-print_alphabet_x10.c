#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowrcase 10x
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0 ;

	while (j <= 9)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}

