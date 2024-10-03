#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	scanf_s("%d%d", &a, &b);
	if (a % b == 0)
	{
		printf("%d 是 %d 的倍數\n", a, b);
	}
	else if (a % b != 0)
	{
		printf("%d 不是 %d 的倍數\n", a, b);
	}
	system("pause");
	return 0;
}