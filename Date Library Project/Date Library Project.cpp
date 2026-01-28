// Date Library Project.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "clsDate.h"

using namespace std;



int main()
{
    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/12/2022");
    Date2.Print();

    clsDate Date3(20, 12, 2022);
    Date3.Print();

    clsDate Date4(250, 2022);
    Date4.Print();

    Date3.PrintYearCalendar();
    cout << Date2.IsValid() << endl;

    cout << "My Age InDays:" <<
        clsDate::CalculateMyAgeInDays(clsDate(10, 3, 2004));

    //You can try any method at your own..

   
  



    system("pause>0");
    return 0;
}

