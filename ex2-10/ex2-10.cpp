#include <stdio.h>
int main(void)
{
	int i=1;
	int num;

	do
	{
	printf("숫자를 입력 : ");
	scanf_s("%d", &num);

	for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				printf("%d  ", i);
			}
			
		}
		printf("\n");
	}while(1);

	return 0;
}