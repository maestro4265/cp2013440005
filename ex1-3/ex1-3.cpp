#include <stdio.h>
int main(void)
{
	int a, b ,c;

	printf("ù��° ����? : ");
	scanf("%d" ,&a);

	printf("�ι�° ����? : ");
	scanf("%d" ,&b);

	printf("����° ����? : ");
	scanf("%d" ,&c);

	if(a>b && a>c)
		printf("%d" ,a);
	else if (b>c)
		printf("%d" ,b);
	else 
		printf("%d" ,c);

	return 0;

}