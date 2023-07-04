#include "main.h"

/**
* *_memset - fills memory wuth a constant byte.
* @n: max bytes to use
* @s: pointer to put the constant
* @b: constant
* return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;
	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
