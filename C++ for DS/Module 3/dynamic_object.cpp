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

int main()
{
    Student Rahim(342,5.00,9);
    Student* karim = new Student(342,5.00,9);
    cout<<karim->clss<<" "<<endl;
    return 0;
}