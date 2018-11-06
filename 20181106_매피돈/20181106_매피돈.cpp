#include <stdio.h>


void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	return ;
}


int main (void)
{
	/*int a=10, b=20;
	int temp;
	int *ptr1 = &a;
	int *ptr2 = &b;
	printf("%d   %d \n", a, b);
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("%d  */ /*%d", *ptr1, &ptr2);*/
	int a=10, b=20;

	printf("%d   %d \n", a, b);

	swap(&a, &b);

	printf("%d   %d \n", a, b);

	return 0;
}