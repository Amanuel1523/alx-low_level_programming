#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n, count;
	
	count=0;
 
	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
