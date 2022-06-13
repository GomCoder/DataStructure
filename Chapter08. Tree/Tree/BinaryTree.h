#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode //���� Ʈ���� ��带 ǥ���� ����ü
{
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
} BTreeNode;

BTreeNode* MakeBTreeNode(void); //��� ����
BTData GetData(BTreeNode* bt); //��忡 ����� �����͸� ��ȯ
void SetData(BTreeNode* bt, BTData data); //��忡 ������ ����

BTreeNode* GetLeftSubTree(BTreeNode* bt); //���� ���� Ʈ���� �ּҰ� ��ȯ
BTreeNode* GetRightSubTree(BTreeNode* bt); //������ ���� Ʈ���� �ּҰ� ��ȯ

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub); //���� ���� Ʈ�� ����
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub); //������ ���� Ʈ�� ����

#endif // !__BINARY_TREE_H__
#pragma once
