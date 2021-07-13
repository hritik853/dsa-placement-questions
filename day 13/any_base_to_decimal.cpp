// any base to decimal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,sum=0,p=1;
    cin>>n>>b;
    while(n!=0)
    {
        int ld=n%b;
        n=n/10;
        sum+=ld*p;
        p=p*b;
    }
    cout<<sum;
    return 0;
}
