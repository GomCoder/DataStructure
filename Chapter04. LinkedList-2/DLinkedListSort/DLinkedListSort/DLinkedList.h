#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node //����� ����ü ǥ��
{
	LData data; //typedef int LData
	struct _node* next;
}Node;

typedef struct _linkedList //���� ����Ʈ�� ����ü ǥ��
{
	Node* head;	//���� ��带 ����Ű�� ���
	Node* cur; //���� �I ������ ���� ���
	Node* before; //������ ���� ���
	int numOfData; //����� �������� ���� ����ϱ� ���� ���
	int (*comp)(LData d1, LData d2); //������ ������ ���� ���

}LinkedList;

typedef LinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2));

#endif 


