#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,pos,max=INT_MIN,sum=0;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           sum=sum+v[i][j];
        }
        if(max<sum)
        {
            max=sum;
            pos=i+1;
        }
    }
    cout<<pos;
}
