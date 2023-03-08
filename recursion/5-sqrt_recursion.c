#include "main.h"

int _sqrt(int prev, int root);

/**
 * _sqrt - find square root of num
 * @cont: counts the value
 * @num: square num value
 * Return: the square root of num
 */
int _sqrt(int cont, int num)
{
	if (cont > num)
		return (-1);
	else if (cont * cont == num)
		return (cont);
	return (_sqrt(cont + 1, num));
}

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}
