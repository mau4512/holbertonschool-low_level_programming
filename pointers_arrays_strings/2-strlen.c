#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
		len++;
	return (len);
}
