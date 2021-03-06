#ifndef __C_LINKED_LIST_H__
#define __C_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node //노드 구현을 위한 구조체 선언
{
	Data data;
	struct _node* next;
} Node;

typedef struct _CLL //원형 리스트를 구현하기 위한 구조체 선언
{
	Node* tail;
	Node* cur;
	Node* before;
	int numOfData;
} CList;

typedef CList List;

void ListInit(List* plist); 

void LInsert(List* plist, Data data); //노드를 꼬리에 추가!
void LInsertFront(List* plist, Data data); //노드를 머리에 추가!

int LFirst(List* plist, Data* pdata);
int LNext(List* plist, Data* pdata);

Data LRemove(List* plist);
int LCount(List* plist);

#endif