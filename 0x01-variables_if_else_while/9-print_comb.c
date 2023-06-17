#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry poiter
*
* Decription : t prints all possible combinations of single-digit numbers.
*
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
		if (num <= 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
