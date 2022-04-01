#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE 1
#define FALSE 0

#define QUE_LEN 30
typedef int Data;


typedef struct _cQueue
{
	int front; //그림을 통해서 F라 표현했던 멤버
	int rear;  //그림을 통해서 R이라 표현했던 멤버
	Data queArr[QUE_LEN]; //배열을 기반으로 Queue를 구성
} CQueue;

typedef CQueue Queue; 

void QueueInit(Queue *pq); //초기화 함수
int QIsEmpty(Queue *pq); //현재 데이터가 비어 있는지 확인

void Enqueue(Queue *pq, Data data); // 큐에 데이터 삽입
Data Dequeue(Queue *pq); //큐에 있는 데이터를 반환/삭제
Data QPeek(Queue *pq); //큐에 있는 데이터를 확인

#endif