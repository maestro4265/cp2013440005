#include <stdio.h>
int main(void)
{
	int num;
	int i=1;
	int a;
	int b;

	printf("enter the number");
	scanf_s("%d", &num);

	if(num%10==0)
	{
		b=num/10;
		a=0;
	}
	else 
	{
		do
		{

			i++;

			if(10*i>num)
			{
				a=num%(10*(i-1));
				b=i-1;
			}
		
		}while(10*i<num);

	}
		printf("%d%d", a,b);
	
		return 0;
	}