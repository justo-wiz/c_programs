#include <stdio.h>

/**
 * int main - Entry Point 
 *
 * Return: Always 0.
 */

int main()
{
	int n;

	printf("Enter an integer\n");
	scanf("%d", &n);
	while (n != 0)
	{
	printf("Enter an Intger\n");
	scanf("%d", &n);
	}
	printf("You are out of loop");
	return (0);
}
