#include <stdio.h>
int main(void)
{
	int num;
	int max=0;

		while(1)
		{	
			printf("숫자 입력 : ");
		    scanf_s("%d", &num);

			if(max>num)
				max=max;
			else
				max=num;

			if(num==0)
				break;
		}

		printf("가장 큰 정수 = %d\n", max);

		return 0;
}