#include <stdio.h>

int BSearch(int ar[], int len, int target); //이진 탐색 알고리즘 구현 함수 선언

int main()
{
    int arr1[500] = {
        0,
    }; // 모든 요소 0으로 초기화
    int arr2[5000] = {
        0,
    }; // 모든 요소 0으로 초기화
    int arr3[50000] = {
        0,
    }; // 모든 요소 0으로 초기화
    int idx;

    //배열 arr1을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
    idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
    if (idx == -1)
    {
        printf("탐색 실패 \n");
    }
    else
    {
        printf("타겟 저장 인덱스: %d \n", idx);
    }

    //배열 arr2을 대상으로, 저장되지 않은 정수 2을 찾으라고 명령
    idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
    if (idx == -1)
    {
        printf("탐색 실패 \n");
    }
    else
    {
        printf("타겟 저장 인덱스: %d \n", idx);
    }

    //배열 arr3을 대상으로, 저장되지 않은 정수 3을 찾으라고 명령
    idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
    if (idx == -1)
    {
        printf("탐색 실패 \n");
    }
    else
    {
        printf("타겟 저장 인덱스: %d \n", idx);
    }
    return 0;
}

int BSearch(int ar[], int len, int target)
{
    int first = 0;      //탐색 대상의 시작 index 값
    int last = len - 1; //탐색 대상의 마지막 index 값
    int mid;            // 중앙 값
    int opCount = 0;    // 비교 연산의 횟수를 기록

    while (first <= last)
    {                             //  first와 last가 역전될 때까지 반복
        mid = (first + last) / 2; //first와 last를 더한 값의 중앙값 계산

        if (target == ar[mid])
        { // mid값과 target값 비교: 값이 같을 경우 해당 요소의 index 값 반환
            return mid;
        }
        else
        { //타겟이 아니라면 탐색 대상을 반으로 줄임
            if (target < ar[mid])
            {
                last = mid - 1; //왜 -1을 하였을까?
            }
            else
            {
                first = mid + 1; //왜 +1을 하였을까?
            }
            /*
                -1 혹은 +1을 하지 않으면 항상 first <= mid <= last 관계가 성립함으로
                탐색 대상이 존재하지 않는 경우에 first와 last의 역전 현상이 발생하지 않음
            */
        }
        opCount += 1; // 비교연산의 횟수 1증가
    }
    printf("비교 연산 횟수: %d \n", opCount);
    return -1; //찾지 못했을 때 반환되는 값 -1
}