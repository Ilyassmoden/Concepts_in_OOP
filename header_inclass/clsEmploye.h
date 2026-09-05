#include "clsPersone.h"
class Emplyee : public clsPerson
{
private:

    string _Title;
    double _Salary;
    string _Department;

public:

    Emplyee(int ID,string first_name,string lastname,string email,string phone,string title,double slary,string Department)
        :clsPerson(ID,first_name,lastname,email,phone)
    {
            _Title = title;
            _Salary = slary;
            _Department =  Department;
    }
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
        cout << "\nInfo:";
    cout << "\n___________________";
    cout << "\nID : " << get_ID();
    cout << "\nFirstName : " << First_name();
    cout << "\nLastName : " << Last_name();
    cout << "\nFull Name : " << FullNmae();
    cout << "\nEmail : " << Email();
    cout << "\nPhone : " << Phone();
    cout << "\nTitle : " << _Title;
    cout << "\nDepartment: " << _Department;
    cout << "\nSalary : " << _Salary;
    }
    // Print
};
