#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num;
	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}