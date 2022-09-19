#include <iostream>

int main()
{
    // 상속
// 부모클래스의 멤버 변수와
// 멤버함수를 자식클래스에서사용가능하게 해주는것(메모리 할당)

    class Gameobject
    {
    public:
        int hp;
        int mp;

        void Attack()
        {


        }
    };

    class Monster : public Gameobject
    {
    public:
        int sqwanTime;
    }

    class warrio : public: Gameobject
    {
    public:
      int level;

    }

        // 상속받은 몬스터 클래스를 상속받음
        class BossMonster : public Monster
    {
    public:
        int skillcoolTime;
    }


    // 부모클래스 배열에 저장하여 한번에 관리할수 있다.
    // Gameobject* mons[10] = {&monster, &bossMonster, &magition};

    // friend 문법

    class network
    {

        friend class network; // 프렌드 문법 - (난발 금지) 때에따라 가독성이 좋아짐

    private:
        int ip;
        int port;
    }


    class process : network
    {

    public:

        process() { this.ip = 0; };

    }
}
