#include "main.h"
/**
* print_alphabet_x10- to print alphabet 10 times
*
*return - void
*/
void print_alphabet_x10(void)
{
	int n = 0;
	int i;

		while (n < 10)
		{
			for (i = 97 ; i <= 122; i++)
			{_putchar(i);
			}
		_putchar('\n');
		n++;
		}
}
