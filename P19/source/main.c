#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int b[] = { 10,20,30,40 };
	int* bptr = b;
	int i, offset;

	printf("Array b printed with:\n Array subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);
	}

	printf("\nPointer/offset notation where\n"
		"the pointer is the array name\n");
	for (offset = 0; offset < 4; offset++)
		printf("*(b+%d)=%d\n", offset, *(b + offset));
	printf("\nPointer subscript notation\n");
	for (i = 0; i < 4; i++)
		printf("bptr[%d]=%d\n", i, bptr[i]);
	printf("\nPointer/offset notation\n");
	for (offset = 0; offset < 4; offset++)
		printf("*(bPtr+%d)=%d\n", offset, *(bptr + offset));

	system("pause");
	return 0;
}