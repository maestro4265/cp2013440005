#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
	int score;
	struct node *pnext;
} node ;


//���Ḯ��Ʈ�� score���� ����ϴ� �Լ�

void pointll(node *ptr)
{
	while(ptr != NULL)//���Ḯ��Ʈ�� ���̻� ���������� �ݺ�
	{
		printf("score is %d \n", ptr->score);
		ptr=ptr->pnext;  
	}
}

// ����ϳ��� �����Ҵ����� �����ϴ� �Լ� (�Է��� ����)

node* createnode(int inout)
{
	node * ptr;
	ptr=(node*) malloc(sizeof(node));
	ptr->score = inout;
	ptr->pnext=NULL;

	return ptr;
}

//���Ḯ��Ʈ��忡 ��带 �߰��ϴ� �Լ�
void addhead(node**a, node *b) //   **  : ����������
{
	b->pnext=*a;
	*a=b;
}


int main()
{
	node* phead; //������� �����Ͱ� NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ̷� ���
	/*node a, b;
	a.score = 10; b.score=20;  
	a.pnext= &b; b.pnext=NULL;*/   //createnode�Լ��� �̿��� ����

	

	phead=createnode(10);
	phead->pnext=createnode(20);
	pointll(phead);


	node a;
	a.score = 5;
	addhead(&phead, &a);     //phead�տ� a��带 ����
	pointll(phead);

	return 0;
}
