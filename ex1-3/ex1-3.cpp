#include <stdio.h>
int main(void)
{
	int a, b ,c;

	printf("첫번째 숫자? : ");
	scanf("%d" ,&a);

	printf("두번째 숫자? : ");
	scanf("%d" ,&b);

	printf("세번째 숫자? : ");
	scanf("%d" ,&c);

	if(a>b && a>c)
		printf("%d" ,a);
	else if (b>c)
		printf("%d" ,b);
	else 
		printf("%d" ,c);

	return 0;

}