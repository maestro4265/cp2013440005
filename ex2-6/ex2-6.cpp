#include <stdio.h>
int main(void)
{
	int num;
	int result;

	do
	{
		printf("숫자 입력: ");
		scanf_s("%d", &num);
		if(num<0)
		{
		printf("error\n");
		}

	}while(num<0);

		printf("%d", 2*num);


	return 0;
}