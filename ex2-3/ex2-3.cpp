#include <stdio.h>
int main(void)
{
	int i;
	int sum=0;

	for(i=1;i<=100;i++)
	{
		if(i%3==0)
			sum=sum+i;
	}
	printf("1부터 100까지의 3의 배수들의 합 = %d", sum);

	return 0;
}