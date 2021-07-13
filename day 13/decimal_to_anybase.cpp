#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,sum=0,p=1;
    cin>>n>>b;
    while(n!=0)
    {
        int ld=n%b;
        n=n/b;
        sum+=ld*p;
        p=p*10;
    }
    cout<<sum;
    return 0;
}
