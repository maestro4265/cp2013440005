#include <stdio.h>
int main(void)
{
	int i;
	int sum=0;
	for(i=0;i<=100;i++)
	{
		if(i%5==0)
		{
		sum=sum+i;
		}
	}

	printf("1~100���� 5�� ����� �� %d: ", sum);

	return 0;
}