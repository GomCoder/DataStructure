#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist) //배열 기반 리스트의 초기화
{
	(plist->numOfData) = 0;	   //아무것도 저장되지 않은 상태
	(plist->curPosition) = -1; //'-1'은 아무런 위치도 참조하지 않았음을 의미함!
}

void LInsert(List *plist, LData data) //배열에 데이터 저장!
{
	if (plist->numOfData > LIST_LEN) //(예외처리)더 이상 저장할 공간이 없다면
	{
		puts("저장이 불가능합니다.");
		return;
	}

	plist->arr[plist->numOfData] = data; //데이터 저장
	(plist->numOfData)++;				 //저장된 데이터의 수 증가
}

int LFirst(List *plist, LData *pdata) //초기화 및 첫 번째 데이터 참조
{
	if (plist->numOfData == 0) //저장된 데이터가 하나도 없다면
		return FALSE;

	(plist->curPosition) = 0; //<===핵심 부분, 참조 위치 초기와! 첫 번째 데이터의 참조를 의미!
	*pdata = plist->arr[0];	  // pdata가 가리키는 공간에 데이터 저장
	return TRUE;
}

int LNext(List *plist, LData *pdata) //그 다음 데이터 참조
{
	if (plist->curPosition >= (plist->numOfData) - 1) //더 이상 참조할 데이터가 없다면
		return FALSE;

	(plist->curPosition)++; // <===핵심 부분
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LData LRemove(List *plist) // 배열 기반 리스트의 삭제, 가장 어렵고 복잡한 부분
{
	int rpos = plist->curPosition; //삭제할 데이터의 인덱스 값 참조
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos]; //삭제할 데이터를 임시로 저장

	for (i = rpos; i < num - 1; i++) //삭제를 위한 데이터의 이동을 진행하는 반복문
		plist->arr[i] = plist->arr[i + 1];

	(plist->numOfData)--;	//데이터의 수 감소
	(plist->curPosition)--; // <===핵심 부분, 참조 위치를 하나 되돌린다.
	return rdata;			//삭제된 데이터의 반환
}

int LCount(List *plist) //데이터의 수 반환
{
	return plist->numOfData;
}