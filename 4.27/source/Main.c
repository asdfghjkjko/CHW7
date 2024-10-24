#include<stdio.h>
#include<math.h>

int main()
{
	int side1, side2;
	float hypotenuse;;
	const int max = 500;
	for (side1 = 1; side1 <= max; side1++)
	{
		for (side2 = side1; side2 <= max; side2++)
		{
			hypotenuse = sqrt(side1 * side1 + side2 * side2);
			if (hypotenuse == (int)hypotenuse)
				printf("%d %d %d\n", side1, side2, (int)hypotenuse);
		}
	}
	return 0;
}