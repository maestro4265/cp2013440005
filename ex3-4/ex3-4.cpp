#include <stdio.h>

int larger(int x, int y, int z)
{
	int result;

	if(x<y && x<z)
	{
		result=x;
	}
	else if (y<z)
	{
		result=y;
	}
	else
	{
		result=z;
	}

	printf("세 숫자 중 가장 작은 숫자 = %d", result);

return result;
}


int main()
{
	int x, y, z;
	int result;

	printf("첫번째 숫자 : ");
	scanf_s("%d", &x);
	printf("두번째 숫자 : ");
	scanf_s("%d", &y);
	printf("세번째 숫자 : ");
	scanf_s("%d", &z);

	result=larger(x, y, z);

	return 0;
}
