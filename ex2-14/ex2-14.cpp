#include <stdio.h>
int main(void)
{
	int num;
	int i=7;
	int sum=0;

	printf("숫자를 입력 : ");
	scanf_s("%d", &num);
/*
	if(num<7)
		printf("입력한 숫자가 7보다 작습니다 : Error\n");

	else 
	{
		for(i=7;i<=num;i++)
			sum=sum+i;
			printf("7부터 입력한 숫자 %d까지의 합 = %d", num, sum);
	}
*/
	do
	{
		if(num<7)
		{
			printf("입력한 숫자가 7보다 작습니다 : Error\n");
			printf("숫자 재입력 : ");
			scanf_s("%d", &num);
		}
	}while(num<7);

	for(i=7;i<=num;i++)
			sum=sum+i;
			printf("7부터 입력한 숫자 %d까지의 합 = %d", num, sum);

	return 0;
}