#include <stdio.h>
/**
 * main - print out two digits followed by comma then space
 * Return: 0
 */
int main(void)
{
	int k = 0;
	int l = 0;
	int i = 0;
	int j = 0;

	for (k = 0; k <= 9; k++)
{
	for (l = 0; l <= 9; l++)
{
	for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
{
	if (((k * 10) + l) < (((i * 10) + j)))
{
	putchar (k + '0');
	putchar (l + '0');
	putchar (' ');
	putchar (i + '0');
	putchar (j + '0');
	if (((k * 10 + l) + ((i * 10) + j) != 197))
{
	putchar ('0' - 4);
	putchar (' ');
}
}
}
}
}
}
	putchar ('\n');
	return (0);
}
