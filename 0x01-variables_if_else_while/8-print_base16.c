#include <stdio.h>

/**
 * main - entry point
 * description_main - prints hex numbers in lower cases, followed by new line
 * Return: 0 when run successfully, non 0 value otherwise
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i <= 9; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	return (0);
}
