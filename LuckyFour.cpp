#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,number,rem,count;
    cin>>t;
    while(t--)
    {
        cin>>number;
        count=0;
        while(number>0)
        {
            rem=number%10;
            number=number/10;
            if(rem==4)
                count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
