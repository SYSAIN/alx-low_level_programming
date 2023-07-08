#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: int
 * @argv: list
 * Return: 0 for success
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv[0]);
	return (0);
}
