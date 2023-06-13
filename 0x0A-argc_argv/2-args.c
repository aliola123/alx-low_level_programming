#include <stdio.h>

/**
 * main - entry point for program that prints all arguments
 * @argc: counts number of arguments passed to the program
 * @argv: prints the strings of arguments passed to the program
 * Return: 0 if successful, other values otherwise
 */
int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
