#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,divider,count=0;
    cin>>n>>divider;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%divider==0)
            count++;
    }
    cout<<count<<endl;

    return 0;
}
