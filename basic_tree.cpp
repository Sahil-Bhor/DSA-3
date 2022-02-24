#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node* l;
    Node* r;
};

int main()
{
    int num;

    Node* root = new Node();
    Node* left = new Node();
    Node* right = new Node();

    root->data = 25;
    root->l = left;
    root->r = right;

    cout<<"Enter a number : ";
    cin>>num;

    if(num < root->data)
    {
        left->data = num;
        left->l = NULL;
        left->r = NULL;

    }

    else if(num > root->data)
    {
        right->data = num;
        right->r = NULL;
        right->l= NULL;

    }

    cout<<"\n         "<<root->data<<endl;
    cout<<endl;
    cout<<left->data<<"                 "<<right->data<<endl;

    cout<<endl;
    return 0;
}
