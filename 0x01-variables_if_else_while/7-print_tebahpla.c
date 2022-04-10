#include <stdio.h>
/**
 * main - print z - a using printchar function
 * Return: 0
 */
int main(void)
{
	int c = 'z';

	while (c >= 'a')
{
	putchar (c);
	c--;
}
	putchar ('\n');
	return (0);
}
