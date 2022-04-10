#include <stdio.h>
/**
 * main- print letters from a - z using putchar function
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	putchar (ch);
	ch++;
}
	return (0);
}
