#include <iostream>
using namespace std;
class clspersoe
{
    // this is new consept so! i can use structer to claas becaus structer is data type 
    struct stAdreess
    {
        string addressLine1;
        string AddressLine2;
        string City;
        string Country;
    };
public:
    string FullName;
    stAdreess Address;
    clspersoe()
    {
        FullName = "ilyas ait elmouden";
        Address.addressLine1 = "stasion";
        Address.AddressLine2 = "baakila ahmer lklalcha";
        Address.City = "Taroudent";
        Address.Country  = "Morroco";
    }
    void PrintAddress()
    {
        cout <<"\nAddress:\n";
        cout << Address.addressLine1<<endl;
        cout << Address.AddressLine2<<endl;
        cout << Address.City<<endl;
        cout << Address.Country<<endl;
    }
};
int main ()
{
    clspersoe PE1;
    PE1.PrintAddress();
}