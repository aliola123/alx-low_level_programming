#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number whose factorial is to be returned
 * Return: 0 if successful, -1 for an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

