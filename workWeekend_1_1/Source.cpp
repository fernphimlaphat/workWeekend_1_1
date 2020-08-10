#include<stdio.h>

int main() {
	int num;
	int i;
	int count = 0;
	printf("Input Number : ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	if (count == 2)
	{
		printf("\n%d is prime number", num);
	}
	else
	{
		printf("\n%d is not prime number", num);

	}

}