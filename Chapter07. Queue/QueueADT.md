# 큐 자료구조의 ADT

### 1. void QueueInit(Queue *pq)

- 큐의 초기화를 진행한다.
- 큐 생성 후 제일 먼저 호출되어야 하는 함수이다.

### 2. int QIsEmpty(Queue *pq)

- 뷰가 빈 경우 TRUE(1)을, 그렇지 않은 경우 FALSE(0)을 반환한다.
  
### 3. void Enqueue(Queue *pq, Data data)

- 큐에 데이터를 저장한다. 매개변수 data로 전달된 값을 저장한다.

### 4. Data Deqeue(Queue *pq)

- 저장 순서가 가장 앞선 데이터를 삭제한다.
- 삭제된 데이터는 반환된다.
- 본 함수의 호출을 위해서는 데이터가 하나 이상 존재함이 보장되어야 한다.
  
### 5. Data QPeek(Queue *pq)

- 저장순서가 가장 앞선 데이터를 반환하되 삭제되지 않는다.
- 본 함수의 호출을 위해서는 데이터가 하나 이상 존재함이 보장되어야 한다.
