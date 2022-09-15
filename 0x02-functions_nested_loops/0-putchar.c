#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *putc = "_putchar";
	int i;

	i = 0;
	while (putc[i] != '\0')
	{
		putchar(putc[i]);
		i++;
	}
	putchar('\n');
}
