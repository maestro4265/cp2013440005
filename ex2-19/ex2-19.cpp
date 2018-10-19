#include <stdio.h>
int main(void)
{
	int i;
	int num;
	int det;
	printf("숫자를 입력 : ");
	scanf("%d", &num);

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

	if(det==0)
		printf("%d는 소수다\n", num);
	else
		printf("%d는 소수가 아니다\n", num);

	return 0;
}