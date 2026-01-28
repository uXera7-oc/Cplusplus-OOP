
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

    clsPerson(int ID,string FirstName ,string LastName,string FullName,string Email,string Phone)
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


int main()
{

    clsPerson Person1(8, "Eight", "Seven", "Onus SICPARVISMAGNA", "Octateam@gmail.com", "+49888");
    Person1.Print();
    

    Person1.SendEmail("Hi", "How are you ?");
    Person1.SendSMS("How Are You ?");




    return 0;
}


