#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry poiter
*
* Decription : prints all single digit number od base 10 starting from 0.
*
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	char n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
putchar('\n');
return (0);
}
