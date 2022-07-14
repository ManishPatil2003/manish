#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
        string id="T";
    public:
        string name;
        int age;
        void showdata()
        {
            cout<<"\nName :"<<name;
                cout<<"\nID :"<<id;
                  cout<<"\nAGE :"<<age;
        }
};
int main()
{
    Person p;
    p.name="manish";
    p.age=20;
    p.showdata();
}