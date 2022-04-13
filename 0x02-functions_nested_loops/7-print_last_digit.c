#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: holds the variable containing last digit
 * Return: 0
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
{
	m = (-1 * (n % 10));
	_putchar (m + '0');
	return (m);
}
	else
{
	m = n % 10;
	_putchar (m + '0');
	return (m);
}
}
