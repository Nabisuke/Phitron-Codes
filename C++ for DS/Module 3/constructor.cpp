#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    double cgpa;
    int clss;
    Student (int roll, double cgpa, int clss)
    {
        (*this).roll = roll; //use (*this) when variables in constructor are the same as variables in class.
        (*this).cgpa = cgpa;
        (*this).clss = clss;
    }

};
int main()
{
    Student rahim(29,3.78,9);
    cout<<rahim.roll<<" "<<rahim.cgpa<<" "<<rahim.clss<<endl;
    
    return 0;
}