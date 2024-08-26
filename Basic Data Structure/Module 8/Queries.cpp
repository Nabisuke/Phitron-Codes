#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = head;
    }
}

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

void delete_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
    }
    delete deleteNode;
}

void delete_from_position(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        return;
    }
    if (pos == 0)
    {
        delete_head(head, tail);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;

    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int x,v;
        cin>>x>>v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 2)
        {
            delete_from_position(head, tail, v);
            print_linked_list(head);
        }
    }

    return 0;
}
