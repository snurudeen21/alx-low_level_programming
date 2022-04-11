#include <stdio.h>
/**
 * main -combine and print numbers 0 - 9 using putchar but note 01 and 10 are same
 * Return: 0
 */
int main(void){
	int i = 0;
	int j = 1;

	for (i = 0; i < 10; i++)
{
	for (j = 1; j < 10; j++)
{
	if (i < j)
{
	putchar (i + '0');
	putchar (j + '0');
	if ((i + j) != 17)
{
	putchar ('0' - 4);
	putchar (' ');
}
}
}
}
	putchar ('\n');
	return (0);
}
