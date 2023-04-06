#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string whose length is to be returned
 * Return: 0 if successful
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l +=  _strlen_recursion(s + 1);
	}

	return (l);
}
