//switch case works well for (==) condition, if x = 3, then it'll print for x == 3 and the below condtions as well.
//To Prevent that, use break after the "case".
#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    switch(x)
    {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        default:
            cout<<"Kichu mile nai"<<endl; //if none of the conditions work
    }
    return 0;
}