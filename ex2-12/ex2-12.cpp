#include <stdio.h>
int main(void)
{
	int num;
	int max=0;

		while(1)
		{	
			printf("���� �Է� : ");
		    scanf_s("%d", &num);

			if(max>num)
				max=max;
			else
				max=num;

			if(num==0)
				break;
		}

		printf("���� ū ���� = %d\n", max);

		return 0;
}