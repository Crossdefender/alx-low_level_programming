#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *  main - Entry point
 *  Description: Assign a random number to a variable and print the number
 *  whether positive, negative or zero
 *  Return: Always 0 (success)
 */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

		printf("%d is positive\n", n);

	else if (n == 0)

		printf("%d is zero\n", n);

	else

		printf("%d is negative\n", n);

	return (0);

}
