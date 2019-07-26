#include<iostream>
#include<map>
using namespace std;

int main()
{
    int size, num;
    map<int, int> count;
    
    cin>>size;
    vector<int> input;
    for(int times=0; times<size; times++)
    {
        cin>>num;
        count[num]++; 
        input.push_back(num);
    }
    
    for(int itr=0; itr<size; itr++)
    {
        if(count[num[itr]] > 1)
            cout<<num[itr]<<" ";
    }
    return 0;
}
