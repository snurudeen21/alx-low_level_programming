#include <unistd.h>
#include <stdio.h>
/**
 * main - print _putchar using functions
 * Return: 0
 */
	int main()
{
	int _putchar (char c);
	_putchar ('_');
	_putchar ('p');
	_putchar ('u');
	_putchar ('t');
	_putchar ('c');
	_putchar ('h');
	_putchar ('a');
	_putchar ('r');
}
	int _putchar (char c)
{
	return (write(1, &c, 1));
	return (0);
}
