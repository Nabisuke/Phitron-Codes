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

void insert_at_tail(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        bool flag = false;

        while (true)
        {
            int val;
            cin>>val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }

        int s;
        cin>>s;
        int count = 0;
        Node *i = head;
        while (i != NULL)
        {
            count++;
            if (i->val == s)
            {
                flag = true;
                break;
            }
            i = i->next;
        }

        if (flag == true)
        {
            cout<<count-1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}