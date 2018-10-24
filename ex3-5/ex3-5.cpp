#include <stdio.h>

void ggd(int x)
{
	int i;

	for(i=1;i<=9;i++)
	{
		printf("%d*%d=%d\n", x, i, i*x);
	}

	return ;
}

int main()
{
	int num=0;

	printf("숫자를 입력 : ");
	scanf_s("%d", &num);

	ggd(num);

	return 0;
}