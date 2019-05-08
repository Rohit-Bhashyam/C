#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[]={1,1,0};
	int b[]={1,0,1};
	int i;
	int pointa=0,pointb=0;
	for(i=0;i<=3;i++)
	{
		if(a[i]==1&&b[i]==0)
		{
			pointa++;
		}
		else if(a[i]==0&&b[i]==1)
		{
			pointb++;
		}
		
	}
	printf("points in a are:%d\n",pointa);
	printf("points in b are:%d\n",pointb);
	
return 0;
}
