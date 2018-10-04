#include <stdio.h>
int main(void)
{
	int a, b;

	printf("first number? : ");
	scanf("%d", &a);
	
	printf("second number? : ");
	scanf("%d", &b);

	if(a>b)
		printf("%d", a);
	else 
		printf("%d", b);

	return 0;
}