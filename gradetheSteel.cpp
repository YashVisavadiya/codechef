#include<iostream>
using namespace std;

bool isgrade10(int h, float cc, int ts)
{
    return ((h>50) && (cc<0.7) && (ts>5600));
}
bool isgrade9(int h,float cc, int ts)
{
    return ((h>50) && (cc<0.7));
}
bool isgrade8(int h,float cc, int ts)
{
    return ((cc<0.7) && (ts>5600));
}
bool isgrade7(int h,float cc, int ts)
{
    return ((h>50) && (ts>5600));
}
bool isgrade6(int h,float cc, int ts)
{
    return ((h>50) || (cc<0.7) || (ts>5600));
}
bool isgrade5(int h,float cc, int ts)
{
    return (!((h>50) && (cc<0.7) && (ts>5600)));
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        float h,ts;
        float cc;

        cin>>h>>cc>>ts;

        if(isgrade10(h,cc,ts))
        {
            cout<<"10"<<endl;
        }
        else if(isgrade9(h,cc,ts))
        {
            cout<<"9"<<endl;
        }
        else if(isgrade8(h,cc,ts))
        {
            cout<<"8"<<endl;
        }
        else if(isgrade7(h,cc,ts))
        {
            cout<<"7"<<endl;
        }
        else if(isgrade6(h,cc,ts))
        {
            cout<<"6"<<endl;
        }
        else if(isgrade5(h,cc,ts))
        {
            cout<<"5"<<endl;
        }

    }

    return 0;
}
