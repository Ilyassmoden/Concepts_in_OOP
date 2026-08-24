#include "header.h++"
int main ()
{

    clsPerson Person1(10,"ILYAS","AIT ELMOUDEN","iait-elm093@gmail.com","0098387727");
    Person1.print();
    Person1.sendEmail( "Hi", "How are you?");
    Person1.sentPhone("How are you?");
    return 0;

}