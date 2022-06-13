#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"


void StackInit(Stack* pstack) //���� �ʱ�ȭ
{
	pstack->head = NULL;

}


int SIsEmpty(Stack* pstack) //������ ������� Ȯ��
{
	if (pstack->head == NULL) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}


void SPush(Stack* pstack, Data data) //������ push ����
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	newNode->data = data;
	newNode->next = pstack->head;

	pstack->head = newNode;
}

Data SPop(Stack* pstack) //������ pop ����
{
	Data rdata;
	Node* rnode;

	if (SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}

	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	free(rnode);

	return rdata;
}

Data SPeek(Stack* pstack) // ������ peek ����
{
	if (SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}

	return pstack->head->data;
}