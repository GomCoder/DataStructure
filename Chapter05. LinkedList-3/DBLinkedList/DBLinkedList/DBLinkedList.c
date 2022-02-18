#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List* plist) //초기화
{
	plist->head = NULL;
	plist->numOfData = 0;
}

void LInsert(List* plist, Data data) //노드 추가
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->head;

	if (plist->head != NULL) {
		plist->head->prev = newNode;
	}
	newNode->prev = NULL;
	plist->head = newNode;

	(plist->numOfData)++;
}

int  LFirst(List* plist, Data* pdata) //첫 번째 노드 추가
{
	if (plist->head == NULL) {
		return FALSE;
	}

	plist->cur = plist->head;
	*pdata = plist->cur->data;

	return TRUE;
}

int LNext(List* plist, Data* pdata) //두번째 이후 노드 추가
{
	if (plist->cur->next == NULL) {
		return FALSE;
	}

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LPrevious(List* plist, Data* pdata) //이전 노드 참조
{
	if (plist->cur->prev == NULL) {
		return FALSE;
	}
	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;

	return TRUE;
}

int LCount(List* plist) //데이터 수
{
	return plist->numOfData;
}