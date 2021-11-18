#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int quantity;
        float price;
        float total_price;
        cin>>quantity>>price;

        if(quantity >= 1000)
        {
            price-=0.1*price;
        }

        total_price=quantity * price;
        cout<<fixed<<setprecision(6)<<total_price<<"\n";
    }
    return 0;
}
