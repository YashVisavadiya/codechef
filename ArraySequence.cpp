#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag = 0;
	cin>>n;
	
	int array[n];
	
	for(int i = 0; i < n; i++)
	{
		cin>>array[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		if(array[i] == 1)
		{
			if(array[i+1] == 2 && array[i+2] == 3)
			{
				flag = 1;
				break;
			}
		}
	}
	
	if(flag > 0)
		cout<<"true";
	else
		cout<<"false";
	/*print the array
	for(int i = 0; i < n; i++)
	{
		cout<<array[i]<<endl;
	}*/
	
	return 0;
}
