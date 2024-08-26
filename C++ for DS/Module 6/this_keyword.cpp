#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age = age;
        }
        void hello()
        {
            cout<<"Hello"<<endl;
        }
};
int main()
{
    Person Nabil("Nabil Safowan",24);
    cout<<Nabil.name<<" "<<Nabil.age<<endl;
    return 0;
}