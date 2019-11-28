#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a;
	int *apr;

	a = 7;
	apr = &a;
	printf("The address of a is %p"
		"\nThe value of aptr is %p", &a, apr);
	printf("\n\nThe value of a is %d"
		"\nThe value of *aptr is %d", a, *apr);
	printf("\n\nShowing that * and & are complements of "
		"each other\n&*aptr = %p"
		"\n*&aptr = %p\n", &*apr, *&apr);
	system("pause");
	return 0;
}