// SoloLearn Tutorial Inheriatnce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int mumAge, sonAge;
    cout << "Enter the mums age: " << endl;
    cin >> mumAge;
    cout << "Enter son's age: " << endl;
    cin >> sonAge;
    try 
    {
        if (sonAge >= mumAge)
            throw 99;
    }
    catch (int x)//default try handler it also works by (int x)
    {
        cout << "Error : " << x << " Your son's age : " << sonAge << " cannot be older than mum's age: " << mumAge << endl;

    }
  





    return 0;

}

