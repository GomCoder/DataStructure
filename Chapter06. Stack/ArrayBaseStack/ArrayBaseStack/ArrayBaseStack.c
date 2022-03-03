#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack* pstack) //스택의 초기화
{
	pstack->topIndex = -1; // -1은 스택이 비었음을 의미
}

int SIsEmpty(Stack* pstack) //스택이 비었는지 확인
{
	if (pstack->topIndex == -1){
		return TRUE; //빈 경우 TRUE를 반환
	}
	else {
		return FALSE;
	}

}

void SPush(Stack* pstack, Data data) //스택의 push 연산
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack* pstack) //스택의 pop 연산
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

Data SPeek(Stack* pstack) //스택의 peek 연산
{
	if (SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}
	return pstack->stackArr[pstack->topIndex];
}