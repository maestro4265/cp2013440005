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

	printf("ù��° ���� : ");
	scanf("%d",&x);
	printf("�ι�° ���� : ");
	scanf("%d",&y);

	aa(x, y);

	return 0;
}