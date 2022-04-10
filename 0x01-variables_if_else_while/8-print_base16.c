#include <stdio.h>
/**
 * main - print hexadecimal 0-f using putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 49;

	while (i < 10)
{
	putchar (i + '0');
	i++;
}
	while (j <= 54)
{
	putchar (j + '0');
	j++;
}
	putchar ('\n');
	return (0);
}
