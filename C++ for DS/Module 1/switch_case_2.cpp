//switch case works well for (==) condition, if x = 3, then it'll print for x == 3 and the below condtions as well.
//To Prevent that, use break after the "case".
#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    switch(x%2)
    {
        case 0:
            cout<<"Even"<<endl;
            break;
        case 1:
            cout<<"Odd"<<endl;
            break;      
    }
    return 0;
}