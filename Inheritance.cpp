// SoloLearn Tutorial Inheriatnce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Mother //class declaration
{
public:
   Mother() {}; //constructor
   void sayHiMum()
   {
       cout << "Hi, I'm the mum" << endl;
   }
   
private:
    int data = 5;
    void printData()
    {
        cout << data << endl;
    }
   
};

class Father //class declaration
{
public:
    Father() {}; //constructor
    void sayHiDad()
    {
        cout << "Hi, I'm the dad" << endl;
    }
};

class daughter : public Mother , public Father//class declaration and base class being chosen, the colon shows the access specifier//
{
public: daughter() {};

};





int main()
{
    std::cout << "Hello World!\n";
    daughter test;
    test.sayHiMum();
    test.sayHiDad();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
