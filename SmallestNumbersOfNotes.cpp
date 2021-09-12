#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[6]={100,50,10,5,2,1};
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        for(int i=0;i<6;i++)
        {
            count+=n/a[i];
            n=n%a[i];
            if(n==0)
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}
