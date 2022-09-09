#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, A;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (A = 'A'; A <= 'F'; A++)
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}
