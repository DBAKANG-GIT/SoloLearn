// SoloLearn Tutorial Inheriatnce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Enemy 
{
protected:
    int attackPower;
public:
    void setAttackPower(int a) 
    {
        attackPower = a;
    }
    void displayAttackPower()
    {
        cout << "The attack power is : " << attackPower << endl;
    }

   

};
class Ninja : public Enemy//inheritance
{
public:
    void attack()
    {
        cout << "Ninja ! " << attackPower << endl;
    }
};

class Monster : public Enemy//inheritance
{
public:
    void attack()
    {
        cout << "Monster ! " << attackPower << endl;
    }
};
int main()
{
    Ninja n;
    Monster m;
    Enemy* e1 = &n;
    Enemy* e2 = &m;
    e1->setAttackPower(50);
    e2->setAttackPower(100);
    n.attack();
    m.attack();
    return 0;

}
