// SoloLearn Tutorial Inheriatnce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    try
    {
        ofstream oft; //file object
        oft.open("MyFileTest.txt",ios::out | ios::app);
        if (oft.is_open())
        {
            cout << "The file is open" << endl;
            oft << "hello World!!!!!!!!!!!!!!!";//write to file
            oft.close();//close file

        }
        else
            throw 1;//throw exception
    }
    catch (int x)//catch exception
    {
        cerr << "Error : " << x << "The file is not open " << endl;
    }

    return 0;

}

