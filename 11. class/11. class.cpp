#include <iostream>

int main()
{
    // class
// class와 구조체의 다른점

// 접근제한 지정자 public, private, protect
// 멤버함수에서 자신에 변수에 접근할수 있는 이유는
// this 포인터 때문
// class* const this = nullptr;


// 주소 변경 하지 못하는 포인터 콘스트
    int* const p = &a;


    // 값을 변경하지 못하는 콘스트 포인터
    const int* p = &a;


    //주소도 값도 변경하지 못하는 콘스트 포인터
    const int* const p = &a;

    //형변환
    // int num = static_cast<int>('A');

    // 디폴트 생성자
    node() { };

    // 디폴트 생성자를 사용하겠다는 선언
    node() = default;

    // 소멸자 객체가 메모리에서 해제될때
    // 호출되는 함수
    ~node() { };

    // 멤버 이니셜라이져
    node() : data(0), next(nullptr)
    {

    };
}

