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

	printf("�� ���� �� ���� ���� ���� = %d", result);

return result;
}


int main()
{
	int x, y, z;
	int result;

	printf("ù��° ���� : ");
	scanf_s("%d", &x);
	printf("�ι�° ���� : ");
	scanf_s("%d", &y);
	printf("����° ���� : ");
	scanf_s("%d", &z);

	result=larger(x, y, z);

	return 0;
}
