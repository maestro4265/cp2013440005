#include <stdio.h>
int main(void)
{
	int a;
	int b;

	printf("Enter a number: ");
	scanf_s("%d", &a);

	b=a%2;

	if(b==0)
		printf("%d�� ¦��", a);
	else
		printf("%d�� Ȧ��", b);

	return 0;
}