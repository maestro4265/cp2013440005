#include <stdio.h>
int main(void)
{
	int num;
	int sum=0;

		do
		{
			printf("���� �Է� : ");
			scanf_s("%d", &num);
			sum=sum+num;
		} while(num!=0);

	printf("%d", sum);

	return 0;
}