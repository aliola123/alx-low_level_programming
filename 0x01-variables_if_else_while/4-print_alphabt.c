#include <stdio.h>

/**
 * main - entry point
 * description_main -
 * Return: 0 if run successfuly, non zero value otherwise
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
			putchar('\n');
	return (0);
}
