// Calsses and Objects OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Class is a Data Type
class clsCalculator
{
private:
    int _Result = 0;
    int _LastNumber = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;

    bool _IsZero(float Number)
    {
        return (Number == 0);
    }

public:

  
    void Add(float Number)
    {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;

    }

    void Subtract(float Number)
    {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;

        
    }

    void Divide(int Number)
    {
           _LastNumber = Number;
        if (_IsZero(Number))
        {
            Number = 1;
        }
       
            _LastNumber = Number;
            _PreviousResult = _Result;
            _LastOperation = "Dividing";
            _Result /= Number;
       
    }

    void Multiply(float Number)
    {
        _LastNumber = 0;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= Number;
    }

    void CancelLastOperation()
    {
        _LastOperation = "Cancelling Last Opertaion";
        _Result = _PreviousResult;
    }

    void Clear()
    {
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
        _Result = 0;
    }

    void PrintResult()
    {
        cout << "Result After " << _LastOperation << " " << _LastNumber << " is : " << _Result << endl;
        
    }

    


};

int main()
{
    clsCalculator Calculator1;

    Calculator1.Clear();
    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtract(20);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Divide(2);
    Calculator1.PrintResult();

    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();


    Calculator1.Clear();
    Calculator1.PrintResult();







    return 0;
}


