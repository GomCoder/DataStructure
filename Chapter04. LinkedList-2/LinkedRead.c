#include <stdio.h>
#include <stdlib.h>

// 1. 노드 생성을 위한 구조체 선언
typedef struct _node
{
    int data;           //데이터를 담을 공간
    struct _node *next; // 연결의 도구: 구조체 Node의 포인터 변수 선언
} Node;

int main(void)
{
    // 2. 연결리스트 구현을 위한 구조체 변수 Node 선언
    Node *head = NULL;    //첫번째 노드를 가리키는 head
    Node *tail = NULL;    //마지막 노드를 가리키는 tail
    Node *current = NULL; //참조및 조회를 위한 현재 위치 current

    Node *newNode = NULL; //다음 Node
    int readData;         //사용자로 부터 데이터를 저장할 변수

    // 3. (데이터의 삽입)데이터를 입력 받는 과정
    while (1)
    {
        printf("자연수 입력: "); //사용자로 부터 데이터를 입력받음
        scanf("%d", &readData);

        if (readData < 1)
        { // 1보다 작은 수를 입력하면 while문 탈출
            break;
        }

        // 4. 노드의 추가 과정
        newNode = (Node *)malloc(sizeof(Node)); //메모리 동적 할당
        newNode->data = readData;               // 생성한 노드에 사용자로부터 입력받은 데이터 저장
        newNode->next = NULL;                   // 주소값 NULL로 초기화

        if (head == NULL)
        { //첫 번째 노드 추가
            head = newNode;
        }
        else
        { //두 번째 이후 부터의 노드 추가
            tail->next = newNode;
        }

        tail = newNode;
    }
    printf("\n");

    // 5. (데이터의 순차 접근)입력 받은 데이터의 출력과정
    printf("입력 받은 데이터의 전체 출력! \n");
    if (head == NULL)
    { //데이터가 존재하지 않는 경우
        printf("저장된 자연수가 존재하지 않습니다.");
    }
    else
    {
        current = head; //첫 번째 데이터 출력
        printf("%d ", current->data);

        while (current->next != NULL)
        { //두 번째 이후의 데이터 출력
            current = current->next;
            printf("%d ", current->data);
        }
    }
    printf("\n");

    // 6. (데이터의 삭제)메모리의 해제과정
    if (head == NULL)
    { //해제할 노드가 존재하지 않을 때
        return 0;
    }
    else
    {
        Node *deleteNode = head;
        Node *deleteNextNode = head->next;

        printf("%d을(를) 삭제합니다. \n", head->data);
        free(deleteNode); //첫 번째 노드 삭제

        while (deleteNextNode != NULL)
        { //두 번째 이후 노드 삭제
            deleteNode = deleteNextNode;
            deleteNextNode = deleteNextNode->next;

            printf("%d을(를) 삭제합니다. \n", deleteNode->data);
            free(deleteNode);
        }
    }
    return 0;
}