#include <stdio.h>
int main(void)
{
	int i=1;
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	printf("������ %d��\n", num);
	do
	{
		printf("%d*%d=%d\n",num, i, i*num);
		i++;
	} while(i<=9);

	return 0;
}