#include "main.h"
/**
 * main - print a - z using functio: _putchar
 * Return: void
 */
void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar('\n');
}
