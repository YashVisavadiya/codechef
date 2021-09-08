#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int D,d,a,b,c;
		cin>>D>>d>>a>>b>>c;
		
		int z=D*d;
		int count=0;
		
		if(z>=10)
		{
			if(z>=21)
			{
				if(z>=42)
				{
					cout<<c<<endl;
				}	
				else
				{
					cout<<b<<endl;
				}
			}	
			else
			{
				cout<<a<<endl;
			}
		}
		else
			cout<<"0"<<endl;
	}
	return 0;
}
