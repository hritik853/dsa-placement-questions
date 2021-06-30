#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,g=0,k;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
            cin>>k;
            v.push_back(k);
    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(v[i]==v[j])
           {
               g++;
           }
       }
    }
   cout<<g;

}
