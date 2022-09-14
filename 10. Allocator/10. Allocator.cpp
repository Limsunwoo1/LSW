// 10. Allocator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //DynamicAllocator

// 동적할당의 필요성
// 효율적인 메모리사용이 용이하다
// 사용자가 어떠한 크기의 메모리가 필요하고
// 데이터를 사용할지 알수 없다.

// 스택의 크기는 정해져있다. 비쥬얼스튜디오 옵션창에서 크기를
// 변경해줄수 있다.
// 10메가바이트 100 메가바이트
// 스택(지역변수), 데이터영역 (전역변수) 이 친구들은
// 프로그램이 실행중일때 메모리가 할당되는게 아니라

// 프로그램 동작중에 메모리의 크기를 지정해주고
// 사용할수있는 메모리 할당이 필요하다.
// 그런애들을 동적할당이라고 한다.

    int a = 4;

    int  arr[a];  // 데이터는 프로그램 시작할때 선언되므로
                  // 지역변수 사용불가.

    // malloc
    // void* - 단수히 주소값 저장할때 사용
    void* p = (void*)malloc(size_t A) // 힙영역에 size_t 만큼 할당 

        int* p = (int*)malloc(size_t A)

        // = + / *
        sizeof(); // 함수 (X), 연산자(O)

    int sizeI = sizeof(int); // 4byte;
    int sizeC = sizeof(char); // 1 byte;

    // 바이트 패딩 *면접
    int sizeS = sizeof(struct); // 12 byte;

    struct person
    {
        int age;
        int height;
        char name;
    }

    // 가장 큰 byte 기준으로 최적화 됨
    //바이트 패딩(Byte Padding)이란 클래스(구조체)에 바이트를 추가해 
    //CPU 접근에 부하를 덜어주는 기법입니다.

    person* p = (person*)malloc(sizeof(person));

    // memset(p, 0, siszeof(char) * NameLen)
    // 메모리할당 영역에 0 으로Len갯수만큼 초기화

    //  memcpy(p, age, sizeof(size_t));
    // p 에 age  값으로 초기화

    // malloc - 할당 당시 쓰레기값이 들어있음

    // calloc - 할당과 동시에 메모리를 초기화

    person* p2 = (person*)calloc((ArrLen), sizeof(person))

        free(p) // 메모리 할당해제

        // realloc() - 메모리 영역 재설정

        (persoon*)realloc(p, sizeof(person));

    // c스타일의 불편한 점을 메모리 할당방식
    // 대체할 c++ (new) 연산자

    int* ps = new int;

    delelte ps;

    int arrSizee = 0;
    std::cin >> arrSize;
    int* pArr = new int[arrSize];

    // [ ] 배열해지시 대괄호 표시 가독성이 좋아짐

    delete[] pArr;


}

