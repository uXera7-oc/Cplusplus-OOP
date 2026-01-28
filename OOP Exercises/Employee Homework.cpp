//Edited From The Person Exercise


#include <iostream>
#include <string>

using namespace std;

class clsEmployee
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Title;
    string _Email;
    string _Phone;
    float _Salary;
    string _Department;

public:

    clsEmployee(int ID,string FirstName ,string LastName,string FullName,string Title,string Email,string Phone,float Salary,string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _FullName = FullName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;

    }

    int ID()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }

    void SetFullName(string FullName)
    {
        FullName = FirstName() + " " + LastName();
        _FullName = FullName;
    }

    string FullName()
    {
        return _FullName;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }



    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string Email()
    {
        return _Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string Phone()
    {
        return _Phone;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float Salary()
    {
        return _Salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    string Department()
    {
        return _Department;
    }

    void Print()
    {
        cout << "\nInfo:\n";
        cout << "\n-------------------------\n";
        cout << "ID           : " << _ID << endl;
        cout << "FirstName    : " << _FirstName << endl;
        cout << "LastName     : " << _LastName << endl;
        cout << "FullName     : " << _FullName << endl;
        cout << "Title        : " << _Title << endl;
        cout << "Email        : " << _Email << endl;
        cout << "Phone        : " << _Phone << endl;
        cout << "Salary       : " << _Salary << endl;
        cout << "Department   : " << _Department << endl;
        cout << "-------------------------\n";
    }

     void SendEmail(string Subject, string Body)
    {
        cout << "\nThe Following message sent successfully to email : " << _Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body    : " << Body << endl;
    }

     void SendSMS(string Message)
     {
        cout << "\nThe Following SMS sent successfully to Phone : " << _Phone << endl;
        cout << Message << endl;
     }
    
};


int main()
{

    clsEmployee Employee1(8, "Standard", "User", "Standard User", "C++", "stuser@gmail.com", "2138", 8888, "Algiers");
    Employee1.Print();

    Employee1.SendEmail("Test", "Nothing just Testing");
    Employee1.SendSMS("You have a work to do this weekend haha");
    




    return 0;
}


