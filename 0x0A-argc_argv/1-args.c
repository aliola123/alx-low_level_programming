#include <stdio.h>

/**
 * main - entry point for a program that prints number of arguments
 * @argc: argument count for number of arguments passed to a program
 * @argv: pointer to an array of strings i.e name of arguments passed
 * Return: 0 if run successful
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
