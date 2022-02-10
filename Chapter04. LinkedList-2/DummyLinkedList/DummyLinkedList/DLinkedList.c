#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List* plist) //초기화 함수의 정의
{
	plist->head = (Node*)malloc(sizeof(Node)); //더미노드 생성
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}

void FInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node)); //새 노드 생성
	newNode->data = data; //새 노드에 데이터 저장

	newNode->next = plist->head->next; //새 노드가 다른 노드를 가리키게 함
	plist->head->next = newNode; //더미 노드가 새 노드를 가리키게 함

	(plist->numOfData)++; //저장된 노드의 수를 하나 증가시킴
}

void SInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* pred = plist->head;
	newNode->data = data;

	//새 노드가 들어갈 위치를 찾기 위한 반복문!!
	while (pred->next != NULL && plist->comp(data, pred->next->data) != 0)
	{
		pred = pred->next;  //다음 노드로 이동
	}
	newNode->next = pred->next;
	pred->next = newNode;
	(plist->numOfData)++;
}


void LInsert(List* plist, LData data) //데이터 삽입
{
	if (plist->comp == NULL) { //정렬기준이 마련되지 않았다면,
		FInsert(plist, data); //head에 노드를 추가!
	}
	else {	//정렬기준이 마련되었다면,
		SInsert(plist, data); //정렬기준에 근거하여 노드를 추가!
	}
}

int LFirst(List* plist, LData* pdata) //데이터 참조 1
{
	if (plist->head->next == NULL) { //더미 노드가 NULL을 가리킨다면,
		return FALSE; //반환할 데이터가 없다!
	}

	plist->before = plist->head; //before는 더미 노드를 가리키게 함
	plist->cur = plist->head->next; //cur은 첫 번째 노드를 가리키게 함

	*pdata = plist->cur->data; //첫 번째 노드의 데이터를 전달
	return TRUE; //데이터 반환 성공!
}

int LNext(List* plist, LData* pdata) //데이터 참조 2
{
	if (plist->cur->next == NULL) {  //더미 노드가 NULL을 가리킨다면,
		return FALSE; //반환할 데이터가 없다!
	}

	plist->before = plist->cur; //cur이 가리키던 것을 before가 가리킴
	plist->cur = plist->cur->next; //cur은 그 다음 노드를 가리킴
	 
	*pdata = plist->cur->data;	//cur이 가리키는 노드의 데이터 전달
	return TRUE; //데이터 반환 성공!
}

LData LRemove(List* plist) //데이터 삭제
{
	Node* rpos = plist->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List* plist) //데이터 수
{
	return plist->numOfData;
}

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2)) //정렬 함수
{
	plist->comp = comp;
}