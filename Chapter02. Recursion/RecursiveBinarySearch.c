#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target){ 
    //int ar[]: 탐색 대상, int first: 시작 index, int last" 마지막 index, int target: 타겟

    int mid; //중간 index 저장 변수

    if(first > last){ //재귀 탈출 조건: first와 last가 서로 역전될 때, 탐색 대상에 타켓이 없을 때
        return -1; //-1의 반환은 탐색의 실패를 의미
    }

    mid = (first + last) / 2; //탐색 대상의 중앙을 찾음

    if(ar[mid] == target){
        return mid; //탐색된 타겟의 인덱스 값 반환
    } else if(target <  ar[mid]){
        return BSearchRecur(ar, first, mid-1, target); // 앞부분을 대상으로 탐색
    } else {
        return BSearchRecur(ar, mid+1, last, target); // 뒤부분을 대상으로 탐색
    }
}

void Result(int idx){ //탐색 결과 출력 함수 선언
    if(idx == -1){
        printf("탐색 실패 \n");
    } else {
        printf("타겟 저장 인덱스: %d \n", idx);
    }
}


int main(void){
    int arr[] ={ 1, 3, 5, 7, 9 };
    int idx;

    idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7); // 타겟이 '7'일 때
    Result(idx);

    idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 4); // 타겟이 '4'일 때
    Result(idx);

    return 0;
}