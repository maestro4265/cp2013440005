#include <stdio.h>
int main(void)
{
	int i;
	int k;
	int num;
	int det=0;
	int sum=0;

	printf("숫자를 입력 : ");
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

	printf("%d이하의 모든 소수들의 합 = %d", num, sum);
	return 0;
}