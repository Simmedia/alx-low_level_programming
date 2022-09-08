#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 *
 * Author: Segun Michael
 *
 */
int main(void)
{
	int c = sizeof(char);
	int i = sizeof(int);
	int li = sizeof(long int);
	int lli = sizeof(long long int);
	int f = sizeof(float);

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a long int: %d bytes(s)\n", li);
	printf("Size of a long long int: %d bytes(s)\n", lli);
	printf("Size of a float: %d byte(s)\n", f);
	return (0);
}
