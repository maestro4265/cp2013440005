#include <stdio.h>
int main(void)
{
	int i;
	int num;
	int det;
	printf("���ڸ� �Է� : ");
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
		printf("%d�� �Ҽ���\n", num);
	else
		printf("%d�� �Ҽ��� �ƴϴ�\n", num);

	return 0;
}