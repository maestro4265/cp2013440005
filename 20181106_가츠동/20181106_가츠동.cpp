#include <stdio.h>
int main (void)
{
	//포인터 : 메모리 주소와 해당 메모리주소에 존재하는 변수의 자료형을 나타내는 식별자

	int a=10;
	int *ptr; //a의 주소를 저장할 포인터변수 ptr을 선언  * : 메모리 주소를 받는 자료형
	ptr=&a; //a의 첫번째 주소를 ptr에 저장   &: addres of ~  , 변수의 주소는 컴파일할때마다 달라진다.
	*ptr=20; //ptr가 가리키는 주소에(a) 20을 저장
	printf("%d\n", a);
	printf("%d", ptr);
	return 0;
}
