// array shuffling
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> n;
    int i,j=0,l=0,x=0,z=0;
    cout<<"Enter size\n";
    cin>>x;
    cout<<"Enter elements\n";
    for(i=0;i<x;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    l = v.size()/2;
    z = l;
    for(i=0;i<z;i++)
    {
        n.push_back(v[i]);
        n.push_back(v[l]);
        l++;
    }
    for(i=0;i<x;i++)
    {
        cout<<n[i]<<" ";
    }
    return 0;
}
