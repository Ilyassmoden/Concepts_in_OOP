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
// class for EMployee
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
// new claas FOR devloper
class Programer : public Emplyee
{
    string _MainProgrammingLanguage;
public:
    Programer(int ID,string first_name,string lastname,
        string email,string phone
        ,string title,double slary,string Department,string MainProgrammingLanguage)
        : Emplyee(ID,first_name,lastname,
        email,phone
        ,title,slary,Department)
        {
            SetMainProgrammingLanguage("MainProgrammingLanguage");
        }
    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string GetMainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }
    void Print()
    {
        Emplyee::Print();
         cout << "\n:MainProgrammingLanguage :" << _MainProgrammingLanguage;
        cout << "\n___________________\n";
    }
};
int main ()
{
  Programer programer1(10,"ilyas","elmouden","gmail.com","0613613690","CEO",900.12,"gerybox","c++");
  programer1.Print();
       
return 0;
}