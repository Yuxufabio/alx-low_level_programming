#include "main.h"

void	print_alphabet();

int main(void)
{
	print_alphabet();
}

void	print_alphabet()

{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
