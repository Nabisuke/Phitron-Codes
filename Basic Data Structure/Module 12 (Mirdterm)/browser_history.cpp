#include <bits/stdc++.h>
using namespace std;

class BrowserHistory
{
public:
    class Node
    {
    public:
        string val;
        Node *next;
        Node *prev;
        Node(string val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    Node* head;
    Node* tail;
    Node* current;
    BrowserHistory()
    {
        head = NULL;
        tail = NULL;
        current = NULL;
    }

    void insert_tail(string val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            current = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }       
    void visit(string url)
    {
        Node* temp = head;
        while (temp != NULL)
        {
            if (temp->val == url)
            {
                current = temp;
                cout<<current->val<<endl;
                return;
            }
            temp = temp->next;
        }
        cout<<"Not Available"<<endl;
    }
    
    void back()
    {
        if (current->prev != NULL)
        {
            current = current->prev;
            cout<<current->val<< endl;
        }
        else
        {
            cout<<"Not Available"<<endl;
        }
    }
   
    void forward()
    {
        if (current->next != NULL)
        {
            current = current->next;
            cout << current->val << endl;
        }
        else
        {
            cout<<"Not Available"<<endl;
        }
    }
};

int main()
{
    BrowserHistory browserHistory;
    string val;
    while (cin >> val)
    {
        if (val == "end")
            break;
        browserHistory.insert_tail(val);
    }

    int t;
    cin>>t;
    string command;
    string address;
    while (t--)
    {
        cin>>command;
        if (command == "visit")
        {
            cin>> address;
            browserHistory.visit(address);
        }

        else if (command == "prev")
        {
            browserHistory.back();
        }
        else if (command == "next")
        {
            browserHistory.forward();
        }
    }
    
    return 0;
}
