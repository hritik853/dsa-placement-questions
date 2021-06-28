// delete element given by key
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int i,j,z,l;
    cout<<"Enter size of array";
    cin>>j;
    cout<<"Enter element of array";
    for(i=0;i<j;i++)
    {
        cin>>z;
        v.push_back(z);
    }
    cout<<"Enter the key";
    cin>>l;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==l)
        {
            v.erase(v.begin()+i);
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
