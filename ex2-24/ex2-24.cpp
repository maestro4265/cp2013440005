#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int k;

	printf("���ڸ� �Է� : ");
	scanf_s("%d", &num);


	for(i=1;i<=num;i++)
	{
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}