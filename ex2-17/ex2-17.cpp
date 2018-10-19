#include <stdio.h>
int main(void)
{
	int i;
	int sum=0;
	for(i=0;i<=100;i++)
	{
		sum=sum+i;
	}

	printf("1~100까지의 합 %d: ", sum);

	return 0;
}