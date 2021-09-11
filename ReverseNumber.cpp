#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int num,rev=0;
        cin>>num;
        while(num>0)
        {
            rev=rev*10+num%10;
            num/=10;
        }
        cout<<rev<<endl;
    }
    return 0;
}
