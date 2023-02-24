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

	int r;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (r = 2; r < 10; r ++)
			{	
				if ((i != j) && (i != r) && (j != r) && (j > i) && (r > j))
				{
					putchar (i + '0');
					putchar (j + '0');
					putchar (r + '0');
					if (i != 7 || j != 8 || r != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar ('\n');

	return (0);
}
