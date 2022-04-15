#include "main.h"

/**
 * print_line - prints underscore n times
 * @n: holds number of time to print _
 * @i: holds the counter
 */

void print_line(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{

	int i;

	for (i = 0; i < n; i++)
{
	_putchar('_');
}
	_putchar('\n');
}
}
