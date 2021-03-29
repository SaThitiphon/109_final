#include <stdio.h>
int main()
{
	int n,j,i,k;
	scanf("%d",&n);
	int a[n],c1[10000];
	for(i=0;i<10000;i++)
	{
		c1[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10000;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==a[j])
			{
				c1[i-1]++;
			}
		}
	}
	int max;
	max = c1[0];
	for(i=0;i<10000;i++)
	{
		if(max<c1[i])
		{
			max = c1[i];
		}
	}
	printf("%d",max);
}
