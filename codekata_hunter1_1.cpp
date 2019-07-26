#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    node *next, *prev;
};

int main()
{
    int size, num;
    node *root, *newNode;
    for(int times=0; times<size; times++)
    {
        cin>>num;
        if(root == NULL)
        {
            newNode = new node();
            newNode->value = num;
        }
        else
        {
            temp = root;
            while(temp->value > num && temp->next != NULL)
                temp = temp->next;
                
            newNode = new node();
            newNode->value = num;
            
            if(temp->next == NULL)
                temp->next = newNode;
            else
            {
                if(temp->prev !=NULL)
                    temp->prev->next = newNode;
                temp->prev = newNode;
                newNode->next = temp;
            }
                
        }
    }
    for(temp = root; temp; cout<<temp->value, temp=temp->next);
}
