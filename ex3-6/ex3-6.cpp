#include <stdio.h>


void prime(int x)
{

	int a;
	int b;
	int i;
	int det1=0;
	int det2=0;

	if(x==4)
	{
		a=2;
		b=2;
		printf("%d=%d+%d", x, a, b);
	}
	else if(x%2==!0)
		printf("짝수를 입력하세요\n");
	else if(x>4)
	{
		
		for(a=2;a<x;a++)
		{

			if(a==2)
			{
				det1=1;
			}
			else
			{
				for(i=2;i<a;i++)
				{
					if(a%i==0)
					{
						det1=0;
						break;
					}
					else
					{
						det1=1;
						
					}
					
				}
			}

			if(det1==1)
			{
				b=x-a;
				
			
					if(b==1)
						det2=0;

					else if(b==2)
						det2=1;
					else
					{
					
							for(i=2;i<b;i++)
							{
								if(b%i==0)
								{
									det2=0;
									break;
								}
								else
								{
									det2=1;
									
								}
							}
					}
				if(det2==1)
				
					printf("%d=%d+%d\n", x, a, b);
				
				
			}	
		
		}
			
	
	}
	
	
	return;
}


int main()
{
	int num;

	printf("숫자입력 : ");
	scanf_s("%d", &num);

	prime(num);

	return 0;
}




