#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{

	long double mul;

	int i, j;

	if (argc != 3)

{
	printf("Error\n");
	exit(98);
}
	int count = 0;

	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
{
	count++;
}
}
	int count1 = 0;

	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
{
	if (((argv[i][j] >= 48 && argv[i][j] <= 57)))
{
	count1++;
}
}
}
	if (count != count1)
{
	printf("Error\n");
	exit(98);
}
	else
{
	mul = atol(argv[1]) * atol(argv[2]);

	printf("%.0Lf\n", mul);
	return (0);
}
}
