#include <stdio.h>


void test(int a)
{
	a=200;
	return ;
}
void testptr(int *ptr) //�����͸� �Ű������� ����ϸ� main�Լ� ���� �������� ��ȭ��ų������
{
	*ptr=100;
}


int main (void)
{
	int a=10;
	test(a);

	printf("%d", a);

	testptr(&a);
	printf("%d", a);
	return 0;
}
