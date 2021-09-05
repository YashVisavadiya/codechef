#include<stdio.h>
#include<conio.h>

void main()
{
	int t,i,j,maxlead=0,count=0,k;
	
	scanf("%d",&t);
	
	int a[t][2],lead[t];
	
	for(i=0;i<t;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<t;i++)
	{
		if(a[i][0]>a[i][1])
		{
			lead[i]=a[i][0]-a[i][1];
		}
		else
			lead[i]=a[i][1]-a[i][0];
	}
//	for(i=0;i<t;i++)
//	{
//		printf("\n%d",lead[i]);
//	}
	for(j=0;j<t;j++)
	{
	    count=0;
        for(i=0;i<t-1;i++)
        {
            if(lead[j]>=lead[i])
            {
                count++;
            }
            
        }
        if(count==t-1)
            {
                maxlead=lead[i];
                k=i;
                break;
            }
	}
	if(a[k][0]>a[k][1])
	{
	    printf("\n1");
	}
	else
	{
	    printf("\n2");
	}
	
	printf("\t%d",maxlead);

}
