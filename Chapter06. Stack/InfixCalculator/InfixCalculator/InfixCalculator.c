#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include "InfixToPostfix.h"
#include "PostCalculator.h"

int EvalInfixExp(char exp[]) {
	int len = strlen(exp);
	int ret;
	char* expcpy = (char*)malloc(len+1); //���ڿ� ������� ����
	strcpy(expcpy, exp); //exp�� expcpy�� ����

	ConvToRPNExp(expcpy); //���� ǥ����� �������� ��ȯ
	ret = EvalRPNExp(expcpy); //��ȯ�� ������ ���

	free(expcpy); //���ڿ� ������� ����
	return ret; //����� ��ȯ
}