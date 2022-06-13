#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode //이진 트리의 노드를 표현한 구조체
{
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
} BTreeNode;

BTreeNode* MakeBTreeNode(void); //노드 생성
BTData GetData(BTreeNode* bt); //노드에 저장된 데이터를 반환
void SetData(BTreeNode* bt, BTData data); //노드에 데이터 저장

BTreeNode* GetLeftSubTree(BTreeNode* bt); //왼쪽 서브 트리의 주소값 반환
BTreeNode* GetRightSubTree(BTreeNode* bt); //오른쪽 서브 트리의 주소값 반환

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub); //왼쪽 서브 트리 연결
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub); //오른쪽 서브 트리 연결

#endif // !__BINARY_TREE_H__
#pragma once
