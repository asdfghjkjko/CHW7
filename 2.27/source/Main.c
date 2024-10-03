#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");
	int i;
	for (i = 0; i <= 4; i++) {
		for (int j = 0; j <= 3 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("    *    \n   ***   \n  *****  \n ******* \n*********\n");
	system("pause");
	return 0;
}