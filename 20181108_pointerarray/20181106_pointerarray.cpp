#include <stdio.h>

//array와 pointer의 혼용

void printarray(int a[], int len)
{
	int i;
	for(i=0;i<len;i++)
		printf("%d ", a[i]);

	return ;
}


int main (void)
{
	int a[3]={10, 20, 30}; //배열 선언 이름: a, 길이 = 3
	int *ptr; //ptr은 address of a[] : 배열의 첫번째 원소의 첫번째 주소 배열의 이름만 사용하면 배열의 첫 요소의 포인터값이 된다.
	int len=3;
	ptr= a;
	
	printf("%d\n", a[0]);
	printf("%d\n", *ptr);
	printf("%d\n", ptr[0]);  //포인터변수의 이름을 배열이름으로 사용가능


	*(ptr)=100; //배열의 첫번째 원소의 값을 변경
	printarray(a, len);
	
	*(++ptr)=100; //배열의 두번째 원소의 값을 변경
	printarray(a, len);
	return 0;
}