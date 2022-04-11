#include <stdio.h>
/**
 * main - print 012 - 789 using putchar but use smallest number
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	for (i = 0; i < 10; i++)
{
	for (j = 1; j < 10; j++)
{
	for (k = 2; k <10; k++)
{
	if (i < j && j < K)
{
	putchar (i + '0');
	putchar (j + '0');
	putchar (k + '0');
	if ((i + j + k) != 24)
{
	putchar ('0' - 4);
	putchar (' ');
}
}
}
}
}
	putchar ('\n');
	return (0);
}
