#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
	int score;
	struct node *pnext;
} node ;


//연결리스트의 score값을 출력하는 함수

void pointll(node *ptr)
{
	while(ptr != NULL)//연결리스트가 더이상 없을때까지 반복
	{
		printf("score is %d \n", ptr->score);
		ptr=ptr->pnext;  
	}
}

// 노드하나를 동적할당으로 생성하는 함수 (입력은 성적)

node* createnode(int inout)
{
	node * ptr;
	ptr=(node*) malloc(sizeof(node));
	ptr->score = inout;
	ptr->pnext=NULL;

	return ptr;
}

//연결리스트헤드에 노드를 추가하는 함수
void addhead(node**a, node *b) //   **  : 이중포인터
{
	b->pnext=*a;
	*a=b;
}


int main()
{
	node* phead; //헤드노드의 포인터가 NULL이면 연결리스트가 없다는 의미로 약속
	/*node a, b;
	a.score = 10; b.score=20;  
	a.pnext= &b; b.pnext=NULL;*/   //createnode함수를 이용해 선언

	

	phead=createnode(10);
	phead->pnext=createnode(20);
	pointll(phead);


	node a;
	a.score = 5;
	addhead(&phead, &a);     //phead앞에 a노드를 연결
	pointll(phead);

	return 0;
}
