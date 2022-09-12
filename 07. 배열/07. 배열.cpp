#include <iostream>

int main()
{
    //배열  
// 배열로 생성시 같은위치에 랜덤생성
    int arr[4] = { 1, 2, 3, 4 }; //배열초기화 방식

    // 배열 크기이상 접근하는거 주의

    arr[0], arr[1], arr[2], arr[3], <arr[4]>


        // 글자가 여러개인것 문자열
        // 배열 끝자리에는 \0가 생략되어있다
        // 컴퓨터는 글자와 문자열을 구분하지못한다.
        char str[256] = "ABCE\0";

    //  얕은복사 call by value
    //  깊은복사 call by reference

    // 다차원 배열

// int arr[10][10] = {};

//순회

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {

        }
    }

    // 재귀함수

    void dfs(int level)
    {
        dfs(level + 1);
    }
    // 때에따라 가독성이 좋아짐

    // 구조체
// 사용자 정의 자료형

    stuct Player
    {
       char name[256];
       char Class[256];
       int hp;
       int mp;
    }

    Player player[10]; // 선언
// 변수명 + . 으로 사용
    player.hp = 50;
    player.mp = 50;

        // 구조체, 배열 초기화
    Player player = {};
    int arr[50] = {};

    // 간단히 설명하면 이름 바꾸기
    // 자료형 재정의
    // typedef 타입 변수명

    typedef struct A;
}
