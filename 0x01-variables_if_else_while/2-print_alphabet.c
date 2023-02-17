#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
