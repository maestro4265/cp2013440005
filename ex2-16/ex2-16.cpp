#include <stdio.h>
int main(void)
{
	int num;
	int i=1;
	int det=10;
	printf("���ڸ� �Է� : ");
	scanf_s("%d", &num);

	do
	{
		if(num/det>=1)
			i++;
			det=det*10;
	}while(num/det>=1);

	printf("%d �ڸ���", i);

	return 0;
}