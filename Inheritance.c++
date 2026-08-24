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
    void print()
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
// class for EMployee

class Emplyee : public clsPerson
{
private:

    string _Title;
    double _Salary;
    string _Department;

public:


    // Title
    void set_Title(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

    // Salary
    void set_Salary(double Salary)
    {
        _Salary = Salary;
    }

    double  Salary()
    {
        return _Salary;
    }

    // Department
    void set_Department(string Department)
    {
        _Department = Department;
    }

    string Department()
    {
        return _Department;
    }

   
    void Print()
    {
         clsPerson::print();
        cout << "Title      : " << _Title << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "Department : " << _Department << endl;
    }
    // Print
    
};
int main ()
{
  Emplyee Employee1;
        Employee1.set_First_name("Mohammed");
        Employee1.set_Last_name("Abu-Hadhoud");
        Employee1.set_Email("a@a.com");
        Employee1.Print();
        Employee1.sendEmail("Hi", "How are you?");
        Employee1.set_Salary(5000);
        cout << "Salary is: " << Employee1.Salary();
        //Calling the print will not print anything from derived class,only base class
        //therfore the print method will not serve me here, this is aproblem will be solved in the next lecture.
        Employee1.Print();
return 0;
}