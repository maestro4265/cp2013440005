#include <stdio.h>
int main(void)
{
	int i=1;
	int num;

	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	printf("구구단 %d단\n", num);
	do
	{
		printf("%d*%d=%d\n",num, i, i*num);
		i++;
	} while(i<=9);

	return 0;
}