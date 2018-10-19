#include <stdio.h>
int main(void)
{
	int num;
	int sum=0;

		do
		{
			printf("숫자 입력 : ");
			scanf_s("%d", &num);
			sum=sum+num;
		} while(num!=0);

	printf("%d", sum);

	return 0;
}