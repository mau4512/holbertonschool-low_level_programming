#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
