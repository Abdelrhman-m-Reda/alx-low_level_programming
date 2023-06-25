#include "main.h"

/**
 * _abs - fuction that computes the absolue
 * value of an integer
 *
 * @n: takes in integer type
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
