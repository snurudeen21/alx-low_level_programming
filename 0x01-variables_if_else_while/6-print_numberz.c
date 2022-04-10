#include <stdio.h>
/**
 * main - print 0-9 but declare variable as int type using putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
{
	putchar (i + '0');
	i++;
}
	putchar ('\n');
	return (0);
}
