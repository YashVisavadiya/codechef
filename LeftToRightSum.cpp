#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,originaln,flag=0;
	cin>>n;
	
	originaln=n;
	
	int a[n],i,count=1,sum[2]={0,0};
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
	}	
	
	while(originaln--)
	{
		sum[0]=0;
		sum[1]=0;
		for(i=0;i<count;i++)
		{
			sum[0]+=a[i];
		}
		for(i=0;i<n-count;i++)
		{
			sum[1]+=a[n-1-i];
		}
		if(sum[0]==sum[1])
		{
			flag=1;
			break;
		}
		count++;
	}
	if(flag==1)
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	
	return 0;
}
