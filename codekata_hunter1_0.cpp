#include<iostream>
#include<map>
using namespace std;

int main()
{
    int size, num;
    map<int, int> count;
    
    cin>>size;
    for(int times=0; times<size; times++)
    {
        cin>>num;
        if(count[num] > 0)
            cout<<num<<" ";
        else
            count[num] = 1; 
    }
}
