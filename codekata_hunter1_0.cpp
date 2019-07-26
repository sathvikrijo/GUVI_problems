#include<iostream>
#include<map>
#include<vector>
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
        if(count[input[itr]] > 1)
        {
            cout<<input[itr]<<" ";
            input.erase(input[itr]);
        }
    }
    return 0;
}
