
#include <iostream>
#include <string>

using namespace std;

class clsPerson
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    string _Phone;

public:

    

    clsPerson(int ID, string FirstName, string LastName, string FullName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _FullName = FullName;
        _Email = Email;
        _Phone = Phone;

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

    void Print()
    {
        cout << "\nInfo:\n";
        cout << "\n-------------------------\n";
        cout << "ID           : " << _ID << endl;
        cout << "FirstName    : " << _FirstName << endl;
        cout << "LastName     : " << _LastName << endl;
        cout << "FullName     : " << _FullName << endl;
        cout << "Email        : " << _Email << endl;
        cout << "Phone        : " << _Phone << endl;
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


class clsEmployee : public clsPerson
{
private:

    string _Title;
    string _Department;
    float _Salary;

public:

    clsEmployee(int ID, string FirstName, string LastName, string FullName, string Email, string Phone,string Title,string Department,float Salary)
        : clsPerson(ID,FirstName,LastName,FullName,Email,Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;

    }


    void SetTitle(string Title)
    {
        _Title = Title;
    }
    string Title()
    {
        return _Title;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }
    string Department()
    {
        return _Department;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }
    float Salary()
    {
        return _Salary;
    }


    void Print()
    {
        cout << "\nInfo:";
        cout << "\n-------------------------";
        cout << "\nID           : " << ID();
        cout << "\nFirstName    : " << FirstName();
        cout << "\nLastName     : " << LastName();
        cout << "\nFullName     : " << FullName();
        cout << "\nEmail        : " << Email();
        cout << "\nPhone        : " << Phone();
        cout << "\nTitle        :  " << _Title;
        cout << "\nDepartment   :  " << _Department;
        cout << "\nSalary       :  " << _Salary;
        cout << "\n-------------------------\n";
    }
};





int main()
{

    clsEmployee Employee1( 10, "UZER","USER", "UZER USER", "gg@gmail.com", "3959459","EZ","CPP",8000);

    Employee1.Print();

   

    return 0;
}


