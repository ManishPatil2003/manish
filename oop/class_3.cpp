#include<iostream>
using namespace std;
class person
{
    private:
    int age;
    string name;
    public:
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    void setname(string namenewvalue)
    {
        name=namenewvalue;
    }
    void setage(int agenewvalue)
    {
        age=agenewvalue;
    }
    person(int agevalue)
    {
        cout<<"\nConstructor with 1 parameter";
        setage(agevalue);
    }
    person(string namevalue,int agevalue)
    {
        cout<<"\nConstructor with 2 parameter";
        setname(namevalue);
        setage(agevalue);

    }
    void printdata()
    {
        cout<<"\nNAME = "<<getname();
        cout<<"\nAGE = "<<getage();
    }

};
int main()
{
    person p1(10);
    person p2("manish",20);   
    p1.printdata();
    p2.printdata();
    return 0;
}