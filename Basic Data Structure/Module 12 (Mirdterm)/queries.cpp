#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    } else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{
    if (pos < 0 || pos > size(head))
    {
        cout<<"Invalid"<<endl;
        return;
    }

    if (pos == 0)
    {
        insert_head(head, tail, val);
    }

    else if
    (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        Node *newNode = new Node(val);
        Node *tmp = head;
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }
}

int main()
{
    int Q;
    cin>>Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X,V;
        cin>>X>>V;

        if (X > size(head))
        {
            cout<<"Invalid"<<endl;
            
        }
        else
        {
            insert_at_position(head, tail, X, V);
        }

        if (head != NULL)
        {
            if (X <= size(head))
            {
                cout<<"L -> ";
                print_normal(head);
                cout<<"R -> ";
                print_reverse(tail);
            }           
        }
    }

    return 0;
}
