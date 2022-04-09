#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main - select an integer at random and check if n=0 or n<0 or n>1 using the fun ction: printf to printout messages
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("%d is positive\n", n);
}
	else if (n == 0)
{
	printf("%d is zero\n", n);
}
	else
	printf("%d is negative\n", n);

	return (0);
}
