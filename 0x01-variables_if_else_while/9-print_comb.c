#include <stdio.h>
/**
 * main - print 0-9 with formatting using putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
{
	putchar (i + '0');
	if (i != 9)
{
	putchar ('0' - 4);
	putchar (' ');
}
	i++;
}
	putchar ('\n');
	return (0);
}
