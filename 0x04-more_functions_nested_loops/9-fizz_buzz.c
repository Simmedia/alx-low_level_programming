#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else if ( (i % 15) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
