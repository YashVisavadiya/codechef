#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,fact;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fact=1;
        for(int i=2;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }

    return 0;
}
