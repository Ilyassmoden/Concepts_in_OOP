#include <iostream>
using namespace std;
//Abstract Class / INterface / contract
class clsMobile
{
public:
    virtual void SendSMS(string Text) = 0;
    virtual void TajePicture() = 0;
    virtual void TakePicture() = 0;
};
class clsiphone : public clsMobile
{
public:
    void SendSMS(string Text)
    {

    };
    void TajePicture()
    {

    };
    void TakePicture()
    {

    };
};
class clsSumsungNote10 : clsMobile
{   
public:
 void SendSMS(string Text)
    {

    };
    void TajePicture()
    {

    };
    void TakePicture()
    {

    };
};
int main ()
{
    clsiphone IP;
    IP.SendSMS("yaaw");
    clsSumsungNote10  SM;
}