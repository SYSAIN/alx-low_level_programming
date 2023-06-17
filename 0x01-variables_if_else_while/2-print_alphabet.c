#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry poiter
*
* Decription : print the alphabet in lowercase, followed by new line.
*
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	char a;

	for (a = 97 ; a <= 122 ; a++)
		putchar(a);
	putchar('\n');
return (0);
}
