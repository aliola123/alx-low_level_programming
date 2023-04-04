#include "main.h"

/**
 *  _strlen - Returns the length of a string.
 * @s: - the string length to be returned
 * Return: The length of the string
 */
int _strlen(char *s)

{
	int l;
	int count = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		count++;
	}
	return (count);
}
