#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,num,rev=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        num=n;
        while(n>0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        cout<<num%10+rev%10<<endl;
    }
    return 0;
}
