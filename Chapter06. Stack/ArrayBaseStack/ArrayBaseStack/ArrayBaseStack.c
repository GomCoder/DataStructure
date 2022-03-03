#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack* pstack) //������ �ʱ�ȭ
{
	pstack->topIndex = -1; // -1�� ������ ������� �ǹ�
}

int SIsEmpty(Stack* pstack) //������ ������� Ȯ��
{
	if (pstack->topIndex == -1){
		return TRUE; //�� ��� TRUE�� ��ȯ
	}
	else {
		return FALSE;
	}

}

void SPush(Stack* pstack, Data data) //������ push ����
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack* pstack) //������ pop ����
{
	int rIdx;

	if (SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rIdx];
}

Data SPeek(Stack* pstack) //������ peek ����
{
	if (SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}
	return pstack->stackArr[pstack->topIndex];
}