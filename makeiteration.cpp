#include<bits/stdc++.h>
using namespace std;

//void makeiteration(int n,int a[n])
//{
//	int tempn=n;
//	
//	while(tempn>1 && tempn--)
//	{
//		int temp=a[n-1];
//		a[n-1]=a[0];
//		a[0]=a[1];
//			
//		for(i=1;i<n-1;i++)
//		{
//			a[i-1]=a[i];		
//		}
//		a[n-2]=temp;
//		
//		printarray(int n,int a[n]);
//	}
//}
//void printarray(int n,int a[n])
//{
//		for(i=0;i<n;i++)
//		{
//			if(i<n-1)
//				cout<<a[i]<<",";
//			else
//				cout<<a[i]<<endl;
//		}
//}
int main()
{
	int n;
	cin>>n;
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	
	int tempn=n;
	
	while(tempn-1>0 && tempn--)
	{
		int temp=a[n-1];
		a[n-1]=a[0];
//		a[0]=a[1];
			
		for(i=1;i<n-1;i++)
		{
			a[i-1]=a[i];		
		}
		a[n-2]=temp;
//		print function
		for(i=0;i<n;i++)
		{
			if(i<n-1)
				cout<<a[i]<<", ";
			else
				cout<<a[i]<<endl;
		}
	}
	
	cout<<"Number of Rotation : "<<n-1<<endl;
//	makeiteration(n,a[n]);
}
