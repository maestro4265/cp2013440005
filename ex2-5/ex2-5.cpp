#include <stdio.h>
int main(void)
{
	int i=0;
	int sum=0;

	do
	{
		
		if(i%3==0)
			sum=sum+i;
		i++;
	}
	while(i<=100);
	printf("1���� 100������ 3�� ������� �� = %d\n", sum);

	return 0;
}