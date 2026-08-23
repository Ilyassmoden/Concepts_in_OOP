#include <iostream>
#include <string>
using namespace std;

#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define RESET   "\033[0m"

class calculatore1
{
    int result = 0;
    int number;
    int sing;
    string str[5] = {RED"adding",CYAN"subtracting",GREEN"Dividing",MAGENTA"Multiplying",BLUE"clear"};
public:
    void set_add(int sum)
    {
        //اضافة العدد الجديد على النتيجة السابقة
        number = sum;
        result += sum;
        sing = 0;
    }
    void set_subtract(int subt)
    {
        //نقص العدد الجديد على النتيجة السابقة
        number = subt;
        result -= subt;
        sing = 1;
    }
    void set_mul(int mul)
    {
        //ضرب العدد الجديد في النتيجة السابقة
        number = mul;
        result *= mul;
        sing = 2;
    }
    void set_divide(int div)
    {
        //قسمة العدد الجديد على النتيجة السابقة
        number = div;
        result /= div;
        sing = 3;
    }
    void set_clear()
    {
        number  = 0;
        result = 0;
        sing = 4;
    }
    void printResult()
    {
        //طباعة العدد النهاءي
       cout << YELLOW << "Result after " << str[sing] + " "<<WHITE<< number << " is " << result << RESET <<endl;
    }
};
int main ()
{
    calculatore1 cal;
    cal.set_mul(10);
    cal.printResult();
    cal.set_add(20);
    cal.printResult();
    cal.set_subtract(5);
    cal.printResult();
    cal.set_divide(3);
    cal.printResult();
    cal.set_mul(3);
    cal.printResult();
    cal.set_clear();
    cal.printResult();
}