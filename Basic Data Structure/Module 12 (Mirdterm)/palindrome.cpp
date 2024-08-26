#include <bits/stdc++.h>
using namespace std;

class Node
{
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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void is_palindrome(Node *head, Node *tail)
{
    if (head == NULL)
    {
        cout<<"YES"<<endl;
        return;
    }
    
    if (head == tail)
    {
        cout<<"YES"<<endl;
        return;
    }

    Node *tmp1 = head;
    Node *tmp2 = tail;
    bool flag = true;

    while (tmp1 != tmp2 && tmp1->prev != tmp2)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    is_palindrome(head, tail);

    return 0;
}