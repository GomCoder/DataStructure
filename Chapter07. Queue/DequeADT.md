# 덱 자료구조의 ADT

### 1. void DequeInit(Deque *pdeq)

- 덱의 초기화를 진행한다.
- 덱 생성 후 제일 먼저 호출되어야 하는 함수이다.

### 2. int DQIsEmpty(Deque *pdeq)

- 덱이 빈 경우 TRUE(1)을, 그렇지 않은 경우 FALSE(0)을 반환한다.
  
### 3. void DQAddFrist(Deque *pdeq, Data data)

- 덱의 머리에 데이터를 저장한다. data로 전달된 값을 저장한다.

### 4. void DQAddLast(Deque *pdeq, Data data)

- 덱의 꼬리에 데이터를 저장한다. data로 전달된 값을 저장한다.

### 5. Data DQRemoveFirst(Deque *pdeq)

- 덱의 머리에 위치한 데이터를 반환 및 소멸한다.

### 6. Data DQRemoveLast(Deque *pdeq)

- 덱의 꼬리에 위치한 데이터를 반환 및 소멸한다.

### 7. Data DQGetFirst(Deque *pdeq)

- 덱의 머리에 위치한 데이터를 소멸하지 않고 반환한다.

### 8. Data DQGetLast(Deque *pdeq)

- 덱의 꼬리에 위치한 데이터를 소멸하지 않고 반환한다.
