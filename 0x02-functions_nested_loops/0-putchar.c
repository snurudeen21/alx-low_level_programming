#include <unistd.h>
/**
 * main - print _putchar using functions
 * Return: 0
 */
int main(void)
{
	int _putchar (char c);
	_putchar ('_');
	_putchar ('_');
	_putchar ('_');
	_putchar ('_');
	_putchar ('_');
	_putchar ('_');
	_putchar ('_');
	_putchar ('_');
}
	int _putchar (char c)
{
	return (write(1, &c, 1));
	return (0);
)
