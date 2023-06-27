#include "main.h"

/**
 * swap_int - swap the valuses of two integers
 * 		using tow input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * return: Nothing
 *
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
