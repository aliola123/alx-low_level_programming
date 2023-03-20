#include <stdio.h>

/**
 * main - entry point
 * description_main -
 *Return: 0 if run successfully, non zero value otherwise
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	return (0);
}
