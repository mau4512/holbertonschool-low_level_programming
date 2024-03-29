#include "main.h"
#include <stdlib.h>
/*
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: a pointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *start1, *start2;
	int i, lens1 = 0, lens2 = 0;

	start1 = s1;
	start2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = start1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = start2;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (new_str == NULL)
		return (NULL);
	start1 = new_str;
	for (i = 0; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
