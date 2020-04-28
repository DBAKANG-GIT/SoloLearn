// SoloLearn Tutorial Inheriatnce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template <class T, typename U>
class Pair {
private:
    T first; U second;
public:
    Pair(T a, U b) :
        first(a), second(b) {
    }
    auto bigger();
};

template <class T, typename U> //you can use type name in place of class//
auto Pair<T,U> ::bigger() //class template function//
{
    return (first > second ? first : second); /// if then else//
}




int main()
{
  
    Pair <float, int> obj(2.2,4);
    cout << obj.bigger();


    return 0;

}

