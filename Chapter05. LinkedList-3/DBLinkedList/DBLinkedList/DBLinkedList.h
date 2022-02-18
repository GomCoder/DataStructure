#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next; //오른쪽 노드를 참조하기 위함
	struct _node* prev; //왼쪽 노드를 참조하기 위함
 } Node;

typedef struct _DLinkedList //양방향 연결 리스트를 구현하기 위한 구조체 선언
{
	Node* head;
	Node* cur;
	int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List* plist); //초기화
void LInsert(List* plist, Data data); //노드 추가

int  LFirst(List* plist, Data *pdata); //첫 번째 노드 추가
int LNext(List* plist, Data* pdata); //두번째 이후 노드 추가
int LPrevious(List* plist, Data* pdata); //이전 노드 참조

int LCount(List *plist); //데이터 수

#endif
