#include <stdio.h>
int main(void)
{//윗부분은 당분간 무시

			  //모든 변수는 사용하기 앞서 선언되어야 함
	int a;    //변수선언 : 자료형(int), 변수이름(a)을 선언    변수는 memory 저장장소의 이름, 자료형이란 변수가 가질 수 있는 값의 범위
		      //파란색 글씨는 c프로그램 자체에서 프로그래머와 약속한 단어(Reserved word)
			  //모든 문장은 ;으로 종료
	float z;  //소수점을 표현하기 위한 자료형(실수자료형)
	
	a=10;     //우변의 값을 좌변의 저장장소로 이동
			  //literal : source코드에서 특정한 자료형의 값을 직접 표현하는 방법 ex) 10, 0xA etc..)
	
	int c = 20, d; //변수선언(,를 이용해 한번에 여려개의 변수 선언 가능) + 변수초기화
	
	d=a+c;  //수식(expression) : 연산자(operator)와 피연산자(operand)로 이루어진 조합, 모든 수식은 반환값을 return하고 부수효과가 있을 수 있다.
	        //연산자(operator) : 연산을 수행하는 기호

	int b = 10;

	a=b++;  //++증감연산자:  반환값 => a=10, 부수효과 => b=11


	a=10,  b=20;
	c=a > b;  //관계연산자 : 두 값의 크기를 비교하는 연산자(<,>,==,!=...) 참이면 1을 반환 거짓이면 0을 반환
	
	d=1&&0;   //논리연산자 : 논리 연산을 해주는 연산자(&&, !, ||..), 참이면 1을 반환 거짓이면 0을 반환

	// operator precedance
	a= 10 + 20*3;  //산술연산자 중에서는 *를 먼저 +를 나중에
	a= 1 || 3*4>10; //*를 먼저 그 후에 관계연산자 그 후에 논리 연산자 그 후에 대입연산자

	printf("%d\n", a);    //%d는 a의 저장된 값을 십진수로 표현, %x는 16진수 
    printf("%d\n", d);

//아랫부분 당분간 무시
	return 0;
}