#include<bits/stdc++.h>
using namespace std;

int makechocklate(int smallbar,int bigbar,int goal){
	int checkbig;
		
		checkbig=goal/5;
		
		if(bigbar>=checkbig)
		{
			int smallgoal;
			
			smallgoal=goal%5;
			
			if(smallbar>=smallgoal)
			{
				return smallgoal;
			}
			else
			{
				return -1;
			}
		}
		else if(bigbar<checkbig && smallbar>=5) 
		{
			int smallgoal;
			smallgoal=goal-(5*bigbar);
			
			if(smallbar>=smallgoal)
			{
				return smallgoal;
			}
			else
			{
				return -1;
			}
					
		}
		else
		{
			return -1;
		}
}

int main()
{
	int bigbar,smallbar,goal;
	cin>>smallbar>>bigbar>>goal;
	
	cout<<makechocklate(smallbar,bigbar,goal)<<endl;
}
