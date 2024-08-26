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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode =new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *&head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    int max_element = INT_MIN;
    int min_element = INT_MAX;
    Node *i = head;
    
    while(i != NULL)
    {
        if (i->val > max_element)
        {
            max_element = i->val;
        }
        if (i->val < min_element)
        {
            min_element = i->val;
        }
        i = i->next;
    }

    if (head == NULL)
    {
        cout<<0<<endl;
    }
    else if(head == tail)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<max_element - min_element<<endl;
    }

    return 0;
}