#include <stdio.h>
int main(void)
{
	int num;
	int i=7;
	int sum=0;

	printf("���ڸ� �Է� : ");
	scanf_s("%d", &num);
/*
	if(num<7)
		printf("�Է��� ���ڰ� 7���� �۽��ϴ� : Error\n");

	else 
	{
		for(i=7;i<=num;i++)
			sum=sum+i;
			printf("7���� �Է��� ���� %d������ �� = %d", num, sum);
	}
*/
	do
	{
		if(num<7)
		{
			printf("�Է��� ���ڰ� 7���� �۽��ϴ� : Error\n");
			printf("���� ���Է� : ");
			scanf_s("%d", &num);
		}
	}while(num<7);

	for(i=7;i<=num;i++)
			sum=sum+i;
			printf("7���� �Է��� ���� %d������ �� = %d", num, sum);

	return 0;
}