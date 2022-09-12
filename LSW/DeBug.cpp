//전처리기
#include <iostream>

//메모지 활용
#pragma region BASIC
int a = 0;
#pragma endregion

// 전역변수는 프로그램 시작과 동시에 할당
// 프로그램이 종료되기전 까지는 사라지지 않는다.
// 무분별한 전역변수 사용은 프로그램이 무거워질수 있다.

// namespace - 협업과정중 변수이름 관리가 쉽다
namespace A
{
    int pos;
}
A::pos;

namespace B
{
    int pos;
}
B::pos;

//[0][1]
//함수
int main()
{
    //주석
    /*1부터
    5까지
    출력하는 코드*/


    std::cout << "1\n";
    std::cout << "2\n";
    std::cout << "3\n";

    std::cout << "4\n";
    std::cout << "5\n";

    //f10 한줄씩 실행
    //ctrl + f10 내 마우스 커서가 있는곳까지 실행한후 멈춘다
    //F9 -> 브레이크 포인트 (신호등빨간불)
    //F5 -> 처음부터 끝까지 디버깅(프로그램 실행)

    // VS 단축키
    // 주석 ctrl + k + c

    // 주석 해제 ctrl + k + u

    //변수 이름변경 ctrl + R + R

    // 소스 코드 접기 ctrl + M + M

    // 언더플로어, 오버플로어
// f10 디버그 한줄씩 이동
// f11 함수 안으로 진입하는 디버깅 단축키 **중요**


    return 0; //프로그램 종료가됩니다.
}