//reivew
//컴퓨터의 기능 : 연산, 메모리 접근, 순서제어
//메모리 접근 : 변수, 자료형, 봔한형, 리터럴, 배열, 포인터 ...
//연산 : 수식, 연산자, 피연산자 ...
//순서제어 : 문장, 조건분, 반복문, 복합문 ...
//알고리즘 : 문제를 해결해나가는 과정 또는 방법     * 알고리즘은 오직 컴퓨터의 기능 세가지로만 이루어져 있다.
//																	  * 유한한 step
//요약화(추상화) : 특정 목적을 위해 필요한 성질을 제외하고 나머지 성질들을 무시
//함수 : 요약화의 산물
//프로그래밍언어: 컴퓨터의 기능 세가지 + 요약화의 기능


#include <stdio.h>

// insertion sorting 프로그램
void printarray(int *arr, int len)  //배열 출력
{
	int i;
	for(i=0;i<len;i++)
			printf("%d ", arr[i]);
}

void swap(int i, int mindex, int*arr) // arr[mindex]와 arr[i]를 변경하는 함수
{
	int temp;
	
	temp=arr[mindex];
	arr[mindex]=arr[i];
	arr[i]=temp;
}


void insertsorting(int *arr, int len)
{
	int m;
	int k;
	int i;

	for(m=1;m<len;m++)
	{

		for(k=m;k>=1;k--)
			{
				i=k-1;

				if(arr[k]<arr[i])
					swap(k, i, arr);
				else
					break;
			}
	}
}
int main (void) //오름차순정렬 프로그램
{
	int arr[]={3, 10, 5, 7, 1, 4, 11, 18, 30, 25, 2, 0, 17};
	int len=13;
	
	insertsorting(arr,len);

	printarray(arr, len);
	return 0;
}
