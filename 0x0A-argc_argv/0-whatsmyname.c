#include <stdio.h>
/**
 * main - This is a program that prints out the name of a program
 * @argc: the argument count for number of arguments passed
 * @argv: the argument vector for name of arguments passed
 * Return: 0 if run sucessful
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
