#include <stdio.h>
int main(void)
{
	int i;
	int k;
	int num;
	int det=0;
	int sum=0;

	printf("���ڸ� �Է� : ");
	scanf("%d", &num);

	for(k=2;k<=num;k++)
	{
		if(k==2)
			det=0;
		else
		{
			for(i=2;i<k;i++)
			{

				if(k%i==0)
				{
					det=1;
					break;
				}
				else
					det=0;
			}
		}

	if(det==0)
		sum=sum+k;
	}

	printf("%d������ ��� �Ҽ����� �� = %d", num, sum);
	return 0;
}