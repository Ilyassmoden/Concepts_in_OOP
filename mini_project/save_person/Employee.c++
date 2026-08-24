#include <iostream>
#include "header.h++"

using namespace std;

int main()
{
    Emplyee Person1(
        10,
        "Ilyass",
        "Lmouden",
        "Software Engineer",
        "ilyass@example.com",
        "0612345678",
        15000,
        "IT"
    );

    Person1.Print();

    cout << endl;

    cout << "Full Name: " << Person1.FullName() << endl;

    Person1.SendEmail(
        "Welcome",
        "Welcome to our company!"
    );

    cout << endl;

    Person1.SendSMS(
        "Hello, this is a test SMS."
    );

    return 0;
}