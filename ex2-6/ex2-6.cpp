#include <stdio.h>
int main(void)
{
	int num;
	int result;

	do
	{
		printf("���� �Է�: ");
		scanf_s("%d", &num);
		if(num<0)
		{
		printf("error\n");
		}

	}while(num<0);

		printf("%d", 2*num);


	return 0;
}