#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle;

	while (*haystack)
	{
		while (*haystack == *needle)
		{
			if(*needle != '\0')
			{
				haystack++;
				needle++;
			}
			else
				break;
		}

		if (*needle == '\0')
			return (startn);
		haystack++;
	}
	return (NULL);
}
