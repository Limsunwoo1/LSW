#include <iostream>

int main()
{
    // template
    template <typename T>
    T add(T a, T b)
    {
        ruturn a + b;
    }


    int ret = add<int>(10, 20);
    float ret1 = add<float>(0.1f, 0.2f);
    char ret2 = add<char>('A', 'B');


    //템플릿 특수화
    templat<>
        float add(float a, float b)
    {
        return (int)(a + b);
    }



    // 자주 사용하는 함수에 한해서
    // 앞에 inline 을 붙혀줌
    // 최적화 문법

    // _forceinline 강제로 inline 선언

    inline void print();
    _forceinline void print();
}

