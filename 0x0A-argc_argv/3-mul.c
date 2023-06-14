#include <stdio.h>


int mul(int a, int b)
{
	int mul;

	mul = a * b;

	printf("%d\n", mul);
	
	return (0);
}

int main(int argc, char *argv[])
{
	int a, b;
	if (argc < 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mul(a, b);
	}

	return (0);
}
