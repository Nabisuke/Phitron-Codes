#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node* head = new Node(10);



    if (head->val == NULL)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}