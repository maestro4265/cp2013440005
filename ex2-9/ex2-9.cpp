#include <stdio.h>
int main(void)
{
	int i=1;
	int num;

	do
	{
		printf("���� �Է�: ");
		scanf_s("%d", &num);
		if(num<1 || num>9)
		{
		printf("�Է°��� ���� �ʰ� : error\n");
		}
	}while(num<1 || num>9);

	for(i=1;i<=9;i++)
		printf("%d*%d=%d\n", num, i, num*i);

	return 0;
}