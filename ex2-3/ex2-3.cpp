#include <stdio.h>
int main(void)
{
	int i;
	int sum=0;

	for(i=1;i<=100;i++)
	{
		if(i%3==0)
			sum=sum+i;
	}
	printf("1���� 100������ 3�� ������� �� = %d", sum);

	return 0;
}