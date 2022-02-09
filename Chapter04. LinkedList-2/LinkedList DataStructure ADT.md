# 단순 연결 리스트 자료구조의 ADT

- 노드들이 한쪽 방향으로 단순하게 연결되어 있는 리스트 자료구조

## 1. void ListInit(List * plist)

- 초기화할 리스트의 주소 값을 인자로 전달한다.
- 리스트 생성 후 제일 먼저 호출되어야 하는 함수이다.

## 2. void ListInsert(List * plist, LData data)

- 리스트에 데이터를 저장한다. 매개변수 data에 전달된 값을 저장한다.

## 3. int LFirst(List *plist, LData*pdata)

- 첫 번째 데이터가 pdata가 가리키는 메모리에 저장된다.
- 데이터의 팜조를 위한 초기화가 진행된다.
- 참조 성공시 TRUE(1), 실패시 FALSE(0) 반환

## 4. int LNext(List *plist, LData*pdata)

- 참조된 데이터의 다음 데이터가 pdata가 가리키는 메모리에 저장된다.
- 순차적인 참조를 위해서 반복 호출이 가능하다.
- 참조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 한다.
- 참조 성공 시 TRUE(1), 실패 시 FALSE(0) 반환

## 5. LData LRemove(List *plist, LData*pdata)

- LFirst 또는 LNext 함수의 마지막 반환 데이터를 삭제한다.
- 삭제된 데이터는 반환한다.
- 마지막 반환 데이터를 삭제하므로 연이은 반복 호출을 허용하지 않는다.

## 6. int LCount(List * plist)

- 리스트에 저장되어 있는 데이터의 수를 반환한다.

## 7. void SetSortRule(List *plist, int(*comp)(LData d1, LData d2))

- 리스트에 정렬의 기준이 되는 함수를 등록한다.
