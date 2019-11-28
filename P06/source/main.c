#include <stdlib.h>
#include <stdio.h>

int cubeByvalue(int n);

int main(void)
{
	int n = 5;
	printf("The original value of number is %d", n);

	n = cubeByvalue(n);

	printf("\nThe new value of number is %d\n", n);
	system("pause");
	return 0;
}

int cubeByvalue(int n)
{
	return n * n * n;
}