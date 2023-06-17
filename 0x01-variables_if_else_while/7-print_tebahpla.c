#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry poiter
*
* Decription : prints lowercasse alphabet in reverce.
*
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 122 ; x >= 97 ; x--)
		putchar(x);
	putchar('\n');
return (0);
}
