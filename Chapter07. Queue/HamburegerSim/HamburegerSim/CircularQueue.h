#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE 1
#define FALSE 0

#define QUE_LEN 30
typedef int Data;


typedef struct _cQueue
{
	int front; //�׸��� ���ؼ� F�� ǥ���ߴ� ���
	int rear;  //�׸��� ���ؼ� R�̶� ǥ���ߴ� ���
	Data queArr[QUE_LEN]; //�迭�� ������� Queue�� ����
} CQueue;

typedef CQueue Queue; 

void QueueInit(Queue *pq); //�ʱ�ȭ �Լ�
int QIsEmpty(Queue *pq); //���� �����Ͱ� ��� �ִ��� Ȯ��

void Enqueue(Queue *pq, Data data); // ť�� ������ ����
Data Dequeue(Queue *pq); //ť�� �ִ� �����͸� ��ȯ/����
Data QPeek(Queue *pq); //ť�� �ִ� �����͸� Ȯ��

#endif