#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a qoute write function
 *	ssize_t write(int fd, consts void *buf, size_t count);
 *
 *  Return: 1 (erorr).
 */

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
