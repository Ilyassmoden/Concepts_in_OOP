#include <iostream>
using namespace std;
class clspersoe
{
    // this is new consept so! i can use class to claas 
    class clsAdres
    {
    public: 
            string addressLine1;
              string AddressLine2;
              string City;
              string Country;
        void PrintAddress()
        {
            cout <<"\nAddress:\n";
            cout << addressLine1<<endl;
            cout << AddressLine2<<endl;
            cout << City<<endl;
            cout << Country<<endl;
        }
    };
   
public:
    string FullName;
    clsAdres Address;
    clspersoe()
    {
        FullName = "ilyas ait elmouden";
        Address.addressLine1 = "stasion";
        Address.AddressLine2 = "baakila ahmer lklalcha";
        Address.City = "Taroudent";
        Address.Country  = "Morroco";
    }
    
};
int main ()
{
    clspersoe PE1;
    PE1.Address.PrintAddress();
}