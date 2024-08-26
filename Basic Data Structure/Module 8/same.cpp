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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    while(true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }


    if (size(head1) == size(head2))
    {
        bool flag = true;
        Node *i = head1;
        Node *j = head2;
        while (i != NULL)
        {
            if (i->val != j->val)
            {
                flag = false;
                break;
            }
            i = i->next;
            j = j->next;
        }
        
        if (flag == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
   
    return 0;
}