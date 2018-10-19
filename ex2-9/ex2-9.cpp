#include <stdio.h>
int main(void)
{
	int i=1;
	int num;

	do
	{
		printf("숫자 입력: ");
		scanf_s("%d", &num);
		if(num<1 || num>9)
		{
		printf("입력값의 범위 초과 : error\n");
		}
	}while(num<1 || num>9);

	for(i=1;i<=9;i++)
		printf("%d*%d=%d\n", num, i, num*i);

	return 0;
}