#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    double cgpa;
    int clss;
    Student(int roll,double cgpa,int clss)
    {
        this->roll = roll;
        this->cgpa = cgpa;
        this->clss = clss;
    }
};

Student* fun()
{
    Student* Rahim = new Student(420,2.5,9);
    return Rahim;
}
int main()
{
    Student* ans = fun();
    cout<<ans->roll<<" "<<ans->cgpa<<" "<<ans->clss<<endl;
    delete ans;
    cout<<ans->roll<<" "<<ans->cgpa<<" "<<ans->clss<<endl;
    return 0;
}