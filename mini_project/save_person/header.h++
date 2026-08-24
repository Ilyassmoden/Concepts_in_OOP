#ifndef CLAAS
#define CLAAS
#include <iostream>
using namespace std;
// class for normal Person
class clsPerson 
{
private:
    int _ID;
    string _First_name;
    string _Last_name;
    string _phone;
    string _Email;
    
    void set_ID(int id)
    {
        _ID = id;
    }
public:
    int get_ID()
    {
        return _ID;
    }
    void set_First_name(string name)
    {
        _First_name = name;
    }
    string First_name()
    {
        return _First_name;
    }
    void set_Last_name(string name)
    {
        _Last_name = name;
    }
    string Last_name()
    {
        return _Last_name;
    }
    void set_Email(string name)
    {
        _Email = name;
    }
    string Email()
    {
        return _Email;
    }
    void set_phone(string name)
    {
        _phone = name;
    }
    string Phone()
    {
        return _phone;
    }
    string FullNmae()
    {
        return _First_name + " " + _Last_name;
    }
    clsPerson(int id,string FIrts_name,string Last_name, string Email,string phone)
    {
        set_ID(id);
        set_Email(Email);
        set_First_name(FIrts_name);
        set_Last_name(Last_name);
        set_phone(phone);
        
    }
    void print()
    {
        cout << "Info:"<< endl;
        cout << "ID             : " << _ID << endl;
        cout << "First name    : " << _First_name<< endl;
        cout << "Last name     : " << _Last_name<< endl;
        cout << "Full name     : " << _First_name + " " << _Last_name << endl;
        cout << "Email         : " << _Email<< endl;
        cout << "phone         : " << _phone << endl;   
    }
    void sendEmail(string Subjetc, string Body)
    {
        cout << "the following message sent successfully to email : "<< _Email<<endl;
        cout << "Subject " << Subjetc << "\nBody" << Body<< endl;
    }
    void sentPhone(string message)
    {
        cout << "the following SMS message sent successfully to Phone : "<< _phone<<endl;
        cout << message<<endl;
    }
    
};
// class for EMployee
class Emplyee
{
private:

    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    double _Salary;
    string _Department;

    void set_ID(int ID)
    {
        _ID = ID;
    }

public:

    // ID
    int get_ID()
    {
        return _ID;
    }

    // First Name
    void set_FirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string get_FirstName()
    {
        return _FirstName;
    }

    // Last Name
    void set_LastName(string LastName)
    {
        _LastName = LastName;
    }

    string get_LastName()
    {
        return _LastName;
    }

    // Full Name
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    // Title
    void set_Title(string Title)
    {
        _Title = Title;
    }

    string get_Title()
    {
        return _Title;
    }

    // Email
    void set_Email(string Email)
    {
        _Email = Email;
    }

    string get_Email()
    {
        return _Email;
    }

    // Phone
    void set_Phone(string Phone)
    {
        _Phone = Phone;
    }

    string get_Phone()
    {
        return _Phone;
    }

    // Salary
    void set_Salary(double Salary)
    {
        _Salary = Salary;
    }

    double get_Salary()
    {
        return _Salary;
    }

    // Department
    void set_Department(string Department)
    {
        _Department = Department;
    }

    string get_Department()
    {
        return _Department;
    }

    // Constructor
    Emplyee(
        int ID,
        string FirstName,
        string LastName,
        string Title,
        string Email,
        string Phone,
        double Salary,
        string Department)
    {
        set_ID(ID);
        set_FirstName(FirstName);
        set_LastName(LastName);
        set_Title(Title);
        set_Email(Email);
        set_Phone(Phone);
        set_Salary(Salary);
        set_Department(Department);
    }

    // Send Email
    void SendEmail(string Subject, string Body)
    {
        cout << "The following message was sent successfully"
             << " to email: " << _Email << endl;

        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    // Send SMS
    void SendSMS(string Message)
    {
        cout << "The following SMS message was sent successfully"
             << " to phone: " << _Phone << endl;

        cout << Message << endl;
    }

    // Print
    void Print()
    {
        cout << "============================" << endl;
        cout << "Person Info:" << endl;
        cout << "============================" << endl;

        cout << "ID         : " << _ID << endl;
        cout << "First Name : " << _FirstName << endl;
        cout << "Last Name  : " << _LastName << endl;
        cout << "Full Name  : " << FullName() << endl;
        cout << "Title      : " << _Title << endl;
        cout << "Email      : " << _Email << endl;
        cout << "Phone      : " << _Phone << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "Department : " << _Department << endl;
    }
};
#endif