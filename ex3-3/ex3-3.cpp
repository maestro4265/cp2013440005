# include <stdio.h>

void prime(int x, int y)
{
	int i;
	int a, b;
	int c;
	int det=0;

	if(x>=y)
	{
		a=x;
		b=y;
	}
	else
	{
		a=y;
		b=x;
	}
	for(i=b;i<=a;i++)
		{
			
			if(i==2)
				{
					det=1;
				}

			else
			for(c=2;c<i;c++)
			{
				if(i%c==0)
				{
					det=0;
					break;
				}
				else if(i%c==!0)
					det=1;
				
			}
		if(det==1)  printf("%d ", i);
		}

	return;

}



int main ()
{
	int x;
	int y;

	printf("첫번째 숫자 : ");
	scanf_s("%d",&x);

	printf("두번째 숫자 : ");
	scanf_s("%d",&y);

	printf("%d~%d사이에 존재하는 모든 소수\n", x, y);
	prime(x, y);

	return 0;
}