#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,et,m;
    cin>>n>>et;
    vector<int> v(n);
    vector<bool> b(n);
    for(int i=0;i<n;i++)
    {
            cin>>v[i];
    }
    m=*max_element(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]+et>=m)
        {
            b.push_back(true);
        }
        else
        {
            b.push_back(false);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

}
