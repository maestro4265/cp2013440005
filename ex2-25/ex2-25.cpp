#include <stdio.h>
int main(void)
{
	int n;
	int i;
	

	for(i=0;i<=4;i++)
	{
		for(n=1;n<=11-2*i;n++)
		{
			printf("*");
		}
		for(n=5-i;n>=0;n--)
		{
			printf("%d", n);
		}
		for(n=1;n<=5-i;n++)
		{
			printf("%d" ,n);
		}
		printf("\n");
	}

	for(i=0;i<=5;i++)
	{
		for(n=1;n<=2*i+1;n++)
		{
			printf("*");
		}
		for(n=i;n>=0;n--)
		{
			printf("%d", n);
		}
		for(n=1;n<=i;n++)
		{
			printf("%d" ,n);
		}
		printf("\n");
	}


		return 0;
}