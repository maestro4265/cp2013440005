#include <stdio.h>

// void printarray(int a[], int len)
void printarray(int *a, int len) // �Լ��� array�� ���� �� pointer������ ����� �� ����
{
	int i;
	for(i=0;i<len;i++)
		printf("%d ", a[i]);

	return ;
}

int main (void)
{
	int a[3]={10, 20, 30}; //�迭 ���� �̸�: a, ���� = 3
	int *ptr; //ptr�� address of a[] : �迭�� ù��° ������ ù��° �ּ� �迭�� �̸��� ����ϸ� �迭�� ù ����� �����Ͱ��� �ȴ�.
	int len=3;
	ptr= a;   //a=ptr;�� �����߻�, ���Կ����� �������� ������ Lvalue(�������), �������� Rvalue(��������� ��)  
				 //���� �迭�� �̸��� Lvalue�� ���ɼ� ����
	
	printf("%d\n", a[0]);
	printf("%d\n", *ptr);
	printf("%d\n", ptr[0]);  //�����ͺ����� �̸��� �迭�̸����� ��밡��(�ݴ뵵 ����)


	*(ptr)=100; //�迭�� ù��° ������ ���� ����
	printarray(a, len);
	
	*(++ptr)=100; //�迭�� �ι�° ������ ���� �����ϰ� ptr�� �ּҸ� +1
	printarray(a, len);

	++*(++ptr); //�迭�� ����° ������ ���� +1
	printarray(a, len);
	return 0;
}