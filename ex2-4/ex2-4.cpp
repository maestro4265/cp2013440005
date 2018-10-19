#include <stdio.h>
int main(void)
{
	int i=0;
	int sum=0;

	while(i<=100)
	{
		if(i%3==0)
			sum=sum+i;
			i++;
	}
	printf("1부터 100까지의 3의 배수들의 합 = %d", sum);

	return 0;
}