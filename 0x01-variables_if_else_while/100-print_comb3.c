#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry poiter
 *
 * Decription : prints all possible different combinations of two digits.
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 48 ; a <= 57 ; a++)
	{
		for (b = 48 ; b <= 57 ; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
