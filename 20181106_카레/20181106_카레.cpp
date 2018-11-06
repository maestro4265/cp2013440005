#include <stdio.h>


void test(int a)
{
	a=200;
	return ;
}
void testptr(int *ptr) //포인터를 매개변수로 사용하면 main함수 내의 변수값을 변화시킬수있음
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
