#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[12]={2048,1024,512,256,128,64,32,16,8,4,2,1};
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        for(int i=0;i<12;i++)
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
