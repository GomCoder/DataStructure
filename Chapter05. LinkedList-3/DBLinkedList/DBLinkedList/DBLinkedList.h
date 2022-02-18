#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next; //������ ��带 �����ϱ� ����
	struct _node* prev; //���� ��带 �����ϱ� ����
 } Node;

typedef struct _DLinkedList //����� ���� ����Ʈ�� �����ϱ� ���� ����ü ����
{
	Node* head;
	Node* cur;
	int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List* plist); //�ʱ�ȭ
void LInsert(List* plist, Data data); //��� �߰�

int  LFirst(List* plist, Data *pdata); //ù ��° ��� �߰�
int LNext(List* plist, Data* pdata); //�ι�° ���� ��� �߰�
int LPrevious(List* plist, Data* pdata); //���� ��� ����

int LCount(List *plist); //������ ��

#endif
