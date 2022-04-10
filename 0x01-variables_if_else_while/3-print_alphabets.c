#include <stdio.h>
/**
 * main - print upper and lowercase letters using putchar()
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
{
	putchar (c);
	c++;
}
	while (ch <= 'Z')
{
	putchar (ch);
	ch++;
}
	putchar ('\n');
	return (0);
}
