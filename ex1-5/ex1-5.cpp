#include <stdio.h>
#include <string.h>
int main(void)
{
	char option[30];
	char apple[]="apple";
	char orange[]="orange";
	char banana[]="banana";
	char peach[]="peach";

	

	printf("Choose one of the following\n");
	printf("apple\norange\nbanana\npeach\n");
	printf("choice : ");
	scanf("%s", option);

	int det1=strcmp(option, apple);
	int det2=strcmp(option, orange);
	int det3=strcmp(option, banana);
	int det4=strcmp(option, peach);


	if(det1==0)
		printf("your choice is %s.", option);
	else if(det2==0)
		printf("your choice is %s.", option);
	else if(det3==0)
		printf("your choice is %s.", option);
	else if(det4==0)
		printf("your choice is %s.", option);

	
	return 0;
}