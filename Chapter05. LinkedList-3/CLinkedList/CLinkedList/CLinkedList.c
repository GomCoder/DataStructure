#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void ListInit(List* plist) //모든 멤버를  NULL과 0으로 초기화
{
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numOfData = 0;
}


void LInsert(List* plist, Data data)  //첫 번째 노드 삽입
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}
	(plist->numOfData)++;

}

void LInsertFront(List* plist, Data data) //두 번째 이후 노드 삽입
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) { 
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
	}
	(plist->numOfData)++;
}

int LFirst(List* plist, Data* pdata) //조회 First
{
	if (plist->tail == NULL) {
		return FALSE;
	}

	plist->before = plist->tail;
	plist->cur = plist->tail->next;

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List* plist, Data* pdata) //조회 Next
{
	if (plist->tail == NULL) {
		return FALSE;
	}

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

Data LRemove(List* plist) //노드 삭제 구현
{
	Node* rpos = plist->cur;
	Data rdata = rpos->data;

	if(rpos == plist->tail) {
		if (plist->tail == plist->tail->next) {
			plist->tail = NULL;
		}
		else {
			plist->tail = plist->before;
		}
	}

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List* plist) //Data 수
{
	return plist->numOfData;
}