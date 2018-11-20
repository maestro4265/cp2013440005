//문자열

#include <stdio.h>
#include <string.h>

void printarray(char *arr, int len)  //배열 출력
{
	int i;
	for(i=0;i<len;i++)
			printf("%c", arr[i]);
}

int main()
{
	char c;    //char자료형은 숫자보다 문자형에 주로 사용
	c='A';     // A는 askii코드로 65
	printf("%d\n", c);//10진수로 표시
	printf("%c\n", c);//char로 표시

	char q[]={'h', 'e', 'l', 'l', 'o'}; //문자형의 배열
	int len=5;

	printarray(q, len);
	
	char b[]="hello";
	printf("%c\n", b);


	return 0;
}

// 문자열의 끝은 항상 null(배열의 길이를 알 수 있도록)