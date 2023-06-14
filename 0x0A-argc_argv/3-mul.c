#include <stdio.h>
#include "main.h"

/**
 * main - entry point for an argument conditional multiplication program
 * @argc: counts number of arguments passed to program
 * @argv: pointer to an array of strings
 *
 * mul - A function that multiplies two numbers
 * @a: variable to be multiplied
 * @b: variable to be multiplied
 *
 * Return: 0 if argc is not less than 2 and 1 other wise
 */

int mul(int a, int b)
{
	int mul;

	mul = a * b;

	printf("%d\n", mul);
	return (0);
}

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mul(a, b);
	}

	return (0);
}
