#include <stdio.h>
int main(void)
{
	int num=79;
	int tries=1;
	int guess;

	printf("���ڸ� �Է� : ");
	scanf_s("%d", &guess);

	do
	{
		{
		if(guess>num)
			printf("�Է��� ���ڰ� ���亸�� Ů�ϴ�\n");
			
		else if(guess<num)
			printf("�Է��� ���ڰ� ���亸�� �۽��ϴ�\n");
		}
		tries++;
		printf("���� ���Է� : ");
		scanf_s("%d", &guess);
	}while(guess!=num);

	if(tries<=10)
		printf("�� �ϳ�? ��");
	else
		printf("�̰� 10Ʈ�� �ѱ�ٰ�?;;\n");

	return 0;
}