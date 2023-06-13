#include <stdio.h>

int average(int, int, int, int, int)
{
	int a, b, c, d, e;
	int sum = a + b + c + d + e;
	int ave = sum / 5;
	return 0;	
}

int main()
{
	int a, b, c, d, e, result;

	printf("Enter the five numbers: \n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	result = average(a, b, c, d, e);
	printf("Average is %d \n", result);
	return 0;
}
