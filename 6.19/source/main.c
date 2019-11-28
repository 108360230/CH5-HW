#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int total[11] = { 0 };
	srand(time(NULL));
	int i;
	int x1,x2,x3;
	for (i = 1; i <= 36000; i++)
	{
		x1 = (rand() % 6) + 1;
		x2 = (rand() % 6 )+ 1;
		x3 = x1 + x2;
		total[x3-2] += 1;
	}
	for(i=2;i<=12;i++)
		printf("\t%d ",i);
	printf("\n");
	for (i = 0; i < 11; i++)
		printf("\t%d", total[i]);
	printf("\n");
	system("pause");
	return 0;
}