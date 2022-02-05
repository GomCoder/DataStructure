# Chapter03. 배열 기반의 리스트 자료구조의 ADT

## 1.  void ListInit(List *plist)

리스트의 초기화

- 초기화할 리스트의 주소 값을 인자로 전달한다.
- 리스트 생성 후 제일 먼저 호출되어야 하는 함수이다.

## 2. void LInsert(List *plist, LData data)

데이터 저장

- 리스트에 데이터를 저장한다. 매개변수 data에 전달된 값을 저장한다.

## 3. int LFirst(List *plist, LData*pdata)

저장된 데이터의 탐색 및 탐색 초기화

- 첫 번째 데이터가 pdata가 가리키는 메모리에 저장된다.
- 데이터의 참조를 위한 초기화가 진행된다.
- 참조 성공시 TRUE(1), 실패시 FALSE(0) 반환

## 4. int LNext(List *plist, LData*pdata)  

다음 데이터의 참조(반환)을 목적으로 호출

- 참조된 데이터의 다음 데이터가 pdata가 가리키는 메모리에 저장된다.
- 순자적인 참조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 한다.
- 참조 성공시 TRUE(1), 실패시 FALSE(0) 반환

## 5. LData LRemove(List *plist)

바로 이전에 참조(반환)이 이뤄진 데이터의 삭제

- LFirst 또는 LNext 함수의 마지막 반환 데이터를 삭제한다.
- 삭제된 데이터는 반환된다.
- 마지막 반환 데이터를 삭제하므로 연이은 반복 호출을 허용하지 않는다.

## 6. int LCount(List *plist)

현재 저장되어 있는 데이터의 수를 반환

- 리스트에 저장되어 있는 데이터의 수를 반환한다.
