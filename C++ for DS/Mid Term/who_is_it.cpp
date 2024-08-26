#include<bits/stdc++.h>
using namespace std;
using namespace std;

class Student
{
    public:
    int id;
    char name[100];
    char section;
    int totalmarks;
};

int main()
{
    int T;
    cin >> T;
    
    for (int i = 0; i <T; i++)
    {
        Student students[3];
        
        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalmarks;
        }
        
        Student highest = students[0];
        for (int i = 1; i < 3; i++)
        {
            if (students[i].totalmarks > highest.totalmarks || (students[i].totalmarks == highest.totalmarks && students[i].id < highest.id))
            {
                highest = students[i];
            }
        }
        
        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.totalmarks << endl;
    }
    
    return 0;
}
