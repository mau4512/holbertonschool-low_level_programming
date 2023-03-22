#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - is a function that concatened two strings
 * @s1: is the first input string
 * @s2: is the second input string
 * @n: the unsigned input integer 
 * concatened s1 with n first elements of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0;
	unsigned int i;
	char *resultado, *alms1, *alms2;
	
	if (s1 == NULL)
		s1 = "";
	alms1 = s1;
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = alms1;

	if (s2 == NULL)
		s2 = "";
	
	alms2 = s2;
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2= alms2;
	
	if (n >= lens2)
		n = lens2;
	resultado = malloc((lens1 + n) + 1);
	if (resultado == NULL)
		return NULL;
	for (i = 0; i < (lens1 + n); i++)
	{
		if(i < lens1)
			resultado[i] = *s1, s1++;
		else
			resultado[i] = *s2, s2++;
	}
	resultado[i] = '\0';
	return resultado;
}
