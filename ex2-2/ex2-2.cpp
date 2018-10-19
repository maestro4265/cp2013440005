#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int sum=0;

	for(i=1;i<=10;i++)
		{
			printf("%d번째숫자를 입력 : ", i);
			scanf_s("%d", &num);
			sum=sum+num;
		}
	printf("sum of numbers = %d", sum);

	return 0;
}