#include <stdio.h>
int main(void)
{
	int i=1;
	int num;

	do
	{
	printf("���ڸ� �Է� : ");
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