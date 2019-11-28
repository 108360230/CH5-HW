#include <stdlib.h>
#include <stdio.h>

void cubeByvalue(int &nptr);

int main(void)
{
	int n = 5;
	printf("The original value of number is %d", n);

	cubeByvalue(n);

	printf("\nThe new value of number is %d\n", n);
	system("pause");
	return 0;
}

void cubeByvalue(int &nptr)
{
	nptr = nptr * nptr *nptr;
}