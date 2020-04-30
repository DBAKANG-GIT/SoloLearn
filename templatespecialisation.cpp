// SoloLearn Tutorial Inheriatnce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template <class T>
class MyClass {
public:
    MyClass(T x) {
        cout << x << " -  not a char" << endl;
    }
};

template<> //will be using template specialization
class MyClass <char>  //here we chose the data type to specialise in
{
public:
    MyClass(char x)
    {
        cout << x << " -  is indeed a char" << endl;
    }

};

template<> //will be using template specialization
class MyClass <double>  //here we chose the data type to specialise in
{
public:
    MyClass(double x)
    {
        cout << x << " -  is indeed a double" << endl;
    }

};

int main()
{
    MyClass<float> s(4.0);
    MyClass<double>ss1(5.23);
    MyClass<char>ss2('q');



    return 0;

}

