#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5]={-4,-1,0,3,10};
	int b[5]={-7,-3,2,3,11};
	int i,j,n = 5,m=5;
	int temp1,temp2;
	for(i=0;i<n;i++)
	{
		
		a[i]=a[i]*a[i];
		b[i]=b[i]*b[i];
	}

	for(i=0;i<n;i++)
	{
        for(j=i+1;j<n;j++)
        {
        	if(a[i]>a[j])
        	{
        		temp1=a[i];
        		a[i]=a[j];
        		a[j]=temp1;
			}	
			if(b[i]>b[j])
			{
				temp2=b[i];
				b[i]=b[j];
				b[j]=temp2;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

