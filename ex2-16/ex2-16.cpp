#include <stdio.h>
int main(void)
{
	int num;
	int i=1;
	int det=10;
	printf("숫자를 입력 : ");
	scanf_s("%d", &num);

	do
	{
		if(num/det>=1)
			i++;
			det=det*10;
	}while(num/det>=1);

	printf("%d 자릿수", i);

	return 0;
}