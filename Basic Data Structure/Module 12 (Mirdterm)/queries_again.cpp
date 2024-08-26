#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    list<int>myList;

    while (t--)
    {
        int x,v;
        cin>>x>>v;

        if (x == 0)
        {
            myList.push_front(v);
            cout<<"L -> ";
            for (int val : myList)
            {
                cout<<val<<" ";
            }
            cout<<endl;

            list<int> reversed(myList);
            reversed.reverse();
            cout<<"R -> ";

            for (int val : reversed)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }

        else if (x == 1)
        {
            myList.push_back(v);

            cout<<"L -> ";
            for (int val : myList)
            {
                cout<<val<<" ";
            }

            cout<<endl;

            list<int> reversed(myList);
            reversed.reverse();
            cout<<"R -> ";
            for (int val : reversed)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }

        else if (x == 2)
        {
            if (v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }


            cout<<"L -> ";
            for (int val : myList)
            {
                cout<<val<<" ";
            }
            cout<<endl;

            list<int> reversed(myList);
            reversed.reverse();
            cout<<"R -> ";
            for (int val : reversed)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
