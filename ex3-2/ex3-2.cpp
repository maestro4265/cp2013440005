# include <stdio.h>

int sum(int x, int y)
{
	int i;
	int a, b;
	int sum=0;

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
		sum=sum+i;
	}
	
	printf("%d", sum);

	return sum;
}
int main ()
{
	int x;
	int y;

	printf("ù��° ���� : ");
	scanf_s("%d",&x);
	printf("�ι�° ���� : ");
	scanf_s("%d",&y);

	sum(x, y);

	return 0;
}