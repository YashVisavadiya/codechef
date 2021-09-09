#include<bits/stdc++.h>
using namespace std;

//int numplusOne(int [],int,int);
int NumplusOne(int a[],int n,int num)
{
    for(int i=0;i<n;i++)
    {
        if(num+1==a[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
	int n;
	cin>>n;

	int a[n],i;
	for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int longeststreak=0;

    for( int num : a)
    {
        for(i=0;i<n;i++)
        {
            if(n-1==a[i])
            {
                break;
            }
            else
            {
                int currentnum=num;
                int currentstreak=1;

                while(NumplusOne(a[n],n,num))
                {
                    currentnum+=1;
                    currentstreak+=1;
                }
                longeststreak=max(longeststreak,currentstreak);
            }
        }
    }
    cout<<"longest Streak is "<<longeststreak<<endl;

	return 0;
}

