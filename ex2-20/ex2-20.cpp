#include <stdio.h>
int main(void)
{
	int i;
	int num;
	int det=0;
	

	for(num=2;num<=100;num++)
	{
		if(num==2)
			det=0;
		else
		{
			for(i=2;i<num;i++)
			{

				if(num%i==0)
				{
					det=1;
					break;
				}
				else
					det=0;
			}
		}

	if(det==0)
		printf("%d ", num);
	}

	return 0;
}