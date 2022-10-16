#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}

	putchar('\n');

	return (0);
}
