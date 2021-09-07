#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
