#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry poiter
*
* Decription : your namber is negative or positive or zero.
*
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	if (n >= 0)
	{
		if (n > 0)
			printf("%d is positive\n", n);
		else
				printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
