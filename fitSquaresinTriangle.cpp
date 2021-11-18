#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int b,n=0;
        cin>>b;



        for(int i=(b/2)-1;i>0;i--)
        {
            n+=i;
        }
        cout<<n<<"\n";
    }


}
