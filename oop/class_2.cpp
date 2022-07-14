#include<iostream>
using namespace std;
class student
{
    private:
    int id;
    string name;
    public:
    string getname()
    {
        return name;
    }
    int getid()
    {
        return id;
    }
    student()
    {
        name="Unknown";
        id=0;
    }
    
    
};
int main()
{
    student s;
    cout<<"\nName="<<s.getname();
    cout<<"\nID="<<s.getid();
    return 0;
}

