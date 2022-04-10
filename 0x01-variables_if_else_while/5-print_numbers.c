#include <stdio.h>
/**
 * main - print numbers from 0 - 9 using putchar function
 * Return: 0
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
{
	putchar (i);
	i++;
}
	putchar ('\n');
	return (0);
}
