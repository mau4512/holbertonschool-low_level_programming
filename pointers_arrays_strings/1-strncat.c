#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A concat string until n term of src
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	int i = 0;

	while (*dest)
		dest++;

	while (i < n)
	{
		if (*src)
		{	
			*dest++ = *src++;
			i++;
		}
		else
			break;
	}
	*dest = '\0';
	return (temp);
}
