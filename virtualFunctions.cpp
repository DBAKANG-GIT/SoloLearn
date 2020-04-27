// SoloLearn Tutorial Inheriatnce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Enemy {
public:
    virtual void attack()
    {
        cout << "Enemy!" << endl;
    }
};

class Ninja : public Enemy {
public:
    void attack() {
        cout << "Ninja!" << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster!" << endl;
    }
};




int main()
{
    Ninja n;
    Monster m;
    Enemy* e1 = &n;
    Enemy* e2 = &m;
    e1->attack(); //ninja
    e2->attack();; //Monster
    n.attack();
    m.attack();
    return 0;

}
