#include <iostream>

int main()
{
    // pointer

// pointer 변수는 4byte

// 단순히 주소값만 저장
// void*

    int a = 110;
    int* p = &a;

    *p = 200; // * 찍고 해당번지 인자값 접근

    // 포인터 배열접근

    int arr[3] = {};

    std::cout << *(arr + 0);
    std::cout << arr[0];

    // & 주소연산자( 해당 변수의 주소값을 가져온다 )


// 배열 포인터
    int(*pArr2D)[4] = arr2D;

    // 포인터 배열

    int* pArrs[4] =
    {
        arr2D[0],
        arr2D[1],
        arr2D[2],
        arr2D[3]
    }

        //REFERENCE

    int num = 200;
    int* pNum = &num;

    *(pNum) = 500;

    // 참조 (래퍼런스) 는 생성과 동시에 초기화가
    // 이루어 져야한다.
    // 포인터의 *( 역참조) 연산을 생략해준다.
    // 사용하기가 편하고
    // 코드 가독성이 높아짐
    int& num2 = num;

    num = 300;
    *(pNum) = 500;

    num2 = 300;


    //함수 포인터

#pragma region FuncPointer
    {
        // 함수에 반환값 동일히 맞춤
        int (*minus)(int, int) = Func;

        int temp = minus(10, 20);
    }


    void prtData()

        void (*print)() = prtData;


    int operation(int x, int y, void (*funccall)(int, int)))
{
int g = 0;
g = funccall(x, y);
}
#pragma endregion
}
