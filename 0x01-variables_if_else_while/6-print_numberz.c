#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successfully run, non zero value otherwise.
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

