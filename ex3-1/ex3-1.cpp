# include <stdio.h>

void aa(int x, int y)
{
	int i;
	int a, b;

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
		printf("%d ",i);

	return ;
}
int main ()
{
	int x;
	int y;

	printf("첫번째 숫자 : ");
	scanf("%d",&x);
	printf("두번째 숫자 : ");
	scanf("%d",&y);

	aa(x, y);

	return 0;
}