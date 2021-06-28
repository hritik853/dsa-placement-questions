
//delete duplicate numbers in sorted array.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int i,j,z;
    cout<<"Enter size of array:";
    cin>>j;
    cout<<"Enter element of array:";
    for(i=0;i<j;i++)
    {
        cin>>z;
        v.push_back(z);
    }
    for(i=0;i<v.size();i++)
    {
        if(i<v.size()-1){
        if(v[i]==v[i+1])
        {
            v.erase(v.begin()+i);
        }
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
