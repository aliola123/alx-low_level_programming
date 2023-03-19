#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * description_main - The code prints a result when a number is inputed
 * Return: 0 if exited proper, non zero value otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANDMAX / 2

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
