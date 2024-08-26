#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    Person* Nabil = new Person("Nabil Safowan",24);
    Person* Sakib= new Person("Sakib Hasan",25);
    // To copy the values ofNabil into Sakib, I can write Sakib = Nabil. It'll work but has its issues. If I ever delete
    // Nabil, the value of Sakib will also disappear as both sakib and nabil were pointing to the same memory address.
    //1
    //Sakib->name = Nabil->name;
    //Sakib->age = Nabil->age;
    //delete Nabil;
    //2 (better way)
    *Sakib = *Nabil;
    delete Nabil;
    cout<<Sakib->name<<" "<<Sakib->age<<endl;

    return 0;
}