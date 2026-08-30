#include <iostream>
using namespace std;
class clsperson{
public:
    virtual void print()
    {
        cout << "hi im a person\n"; 
    }
};
class clsEmploye : public clsperson
{
public:
    void print()
    {
        cout << "hi im a Employe\n";
    }
};
class clsStudent : public clsperson
{
public:
    void print()
    {
        cout << "hi im a student\n";
    }
};
int main()
{
    clsEmploye EM;
    clsStudent ST;
    EM.print();
    ST.print();
    clsperson *PE1 = &EM;
    clsperson *PE2 = &ST;
    PE1->print();
    PE2->print();
}