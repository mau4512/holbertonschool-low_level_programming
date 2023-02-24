#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	int j;

	for (i = 0; i<10; i++)
	{
		for (j=1; j<10; j++)
		{
			if((i!=j)&&(j>i))
			{
				putchar(i + '0');
				putchar(j + '0');
				if(i<9 || j<8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');

	return(0);
}
