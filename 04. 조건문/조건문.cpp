#include <iostream>

int main()
{
    int a = 10;

    if ( a > 0 ) // 조건식
    {

    }
    else if ( a < 0 )  // 또 다른 조건은 else if
    {

    }
    else // 아무조건도 만족하지 못한 경우
    {

    }

    // 1 왼쪽 2 오른쪽 3 위쪽 4 아래쪽
    int inputDirection = 0;

    if (inputDirection == 1)
    {
        // 왼쪽이동
    }
    else if (inputDirection == 2)
    {
        // 오른쪽이동
    }
    else if (inputDirection == 3)
    {
        // 위쪽
    }
    else if (inputDirection == 4)
    {
        // 아래쪽
    }

    // 대각선이동 같은경우 조건이 동시에 실행될수 있게 조건문을 따로 건다

    if (inputDirection == 1)
    {
        // 왼쪽이동
    }

    if (inputDirection == 2)
    {
        // 오른쪽이동
    }

    if (inputDirection == 3)
    {
        // 위쪽
    }

    if (inputDirection == 4)
    {
        // 아래쪽
    }

    return 0;
}
