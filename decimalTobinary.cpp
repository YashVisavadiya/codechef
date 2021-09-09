//  DECIMAL TO BINARY
#include<bits/stdc++.h>
using namespace std;

int decimalTobinary(int n)
{
	int x=1;
	int ans=0;
	
	while(x<=n)
		x*=2;
	x/2;
	while(x>0)
	{
		int lastdigit=n/x;
		n-=lastdigit*x;
		x/=2;
		ans=ans*10+lastdigit;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	
	int answer=decimalTobinary(n);
	cout<<answer<<endl;
}


