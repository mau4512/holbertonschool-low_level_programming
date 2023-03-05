#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || 
				s[i] == ';' || s[i] == '.' || s[i] == '!' || 
				s[i] == '?' || s[i] == '"' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] != '\0' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
