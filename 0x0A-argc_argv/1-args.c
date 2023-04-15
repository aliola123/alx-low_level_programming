#include <stdio.h>

/**
 * main - entry point for program that prints out argument count
 * @argc: the argument count
 * @argv: the argument vector i.e the name of arguments passed
 * Return: 0 if success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}
