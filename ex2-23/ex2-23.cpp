#include <stdio.h>
int main(void)
{
	int i;
	int k;
	int n;
	for(i=1;i<=3;i++)
	{
		n=2*i-1;
		for(k=1;k<=6-n;k++)
		{
			printf("*");
		}

		printf(" ");

		for(k=1;k<=n;k++)
		{
			printf(" *");
		}

		printf("\n");
	}

return 0;

}
