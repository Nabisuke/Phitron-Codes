#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;

};
int main()
{
    Student a,b;
    cin.getline(a.name,100); //while taking input with space in between for string, make sure name is in one line and cgpa,roll are in another line
    cin>>a.roll>>a.cgpa;
    getchar();
    cin.getline(b.name,100); //while taking input with space in between for string, make sure name is in one line and cgpa,roll are in another line
    cin>>b.roll>>b.cgpa;
    //a.roll = 2110488;
    //a.cgpa = 3.78;
    //char tmp [100] = "Nabil";
    //strcpy(a.name,tmp);

    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;
    return 0;
}