#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,mid;
        cin>>a>>b>>c;
        mid= a>b? (a<c?a:(b>c?b:c)) : b<c?b:(a>c?a:c);
        cout<<mid<<endl;
    }
    return 0;
}
