#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Author: Segun Michael
 */
int main(void)
{
	int n;
	char low;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}