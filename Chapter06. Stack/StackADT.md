# 스택 자료구조의 ADT

### 1. void StackInit(Stack *pstack)

- 스택의 초기화를 진행한다.
- 스택 생성 후 제일 먼저 호출되어야 하는 함수이다.

### 2. int SIsEmpty(Stack *pstack)

- 스택이 빈 경우 TRUE(1)을, 그렇지 않은 경우 FALSE(0)을 반환한다.
  
### 3. void SPush(Stack *pstack, Data data)

- 스택에 데이터를 저장한다. 매개변서 data로 전달된 값을 저장한다.

### 4. Data SPop(Stack *pstack)

- 마지막에 저장된 요소를 삭제한다.
- 삭제된 데이터는 반환이 된다.
- 본 함수의 호출을 위해서는 데이터가 하나 이상 존재함이 보장되어야 한다.
  
### 5. Data SPeek(Stack *pstack)

- 마지막에 저장된 요소를 반환하되 삭제하지 않는다.
- 본 함수의 호출을 위해서는 데이터가 하나 이상 존재함이 보장되어야 한다.
