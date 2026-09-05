#pragma once
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
public:
    clsPerson(int ID, string FirstName, string LastName,string
    Email, string Phone)
    {
        _ID = ID;
        _First_name = FirstName;
        _Last_name = LastName;
        _Email = Email;
        _phone = Phone;
    }
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
    void Print()
    {
        cout << "Info:\n-----------------------"<< endl;
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