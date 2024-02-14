#include <iostream>
#include<string.h>
using namespace std;
class MyPhBook
{
private:
    string name;
    string area;
    string phoneNum;
public:
    void setName(string n)
    {
        name=n;
    }
    void setArea(string a)
    {
        area=a;
    }
    void setNum(string ph)
    {
        phoneNum=ph;
    }
    void displayBook()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Area = "<<area<<endl;
        cout<<"Mobile = "<<phoneNum<<endl;
        cout<<"*******************************"<<endl;
    }
};

int main()
{
    MyPhBook c1,c2,c3,c4,c5;

    c1.setName("Swastu");
    c1.setArea("Mathura");
    c1.setNum("084126482");

    c2.setName("XYZ");
    c2.setArea("Delhi");
    c2.setNum("0172659");

    c3.setName("ABC");
    c3.setArea("Kerela");
    c3.setNum("7868432");

    c4.setName("Nehru");
    c4.setArea("Noida");
    c4.setNum("9147340");

    c5.setName("Govind");
    c5.setArea("Raipur");
    c5.setNum("6613056");

    c1.displayBook();
    c2.displayBook();
    c3.displayBook();
    c4.displayBook();
    c5.displayBook();

    return 0;
}