#include <stdio.h>
/**
 * main- print letters from a - z using putchar function
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	putchar (ch);
	ch++;
}
	putchar ('\n');
	return (0);
}
