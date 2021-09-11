#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
            for(i=1;i<=a;i++)
            {
                n=a/i;
                if(n<=i)
                    break;
            }
            if(a==1||a==0)
            {
                cout<<a<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
    }
    return 0;
}
