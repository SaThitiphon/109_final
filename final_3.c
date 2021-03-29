#include <stdio.h>
int main()
{
	int a,count,sum,temp,k;
	scanf("%d",&a);
	int m[a][a],i,j,sum1[a*2+2];
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	k = 0;
	for(i=0;i<a;i++)
	{
		sum = 0;
		for(j=0;j<a;j++)
		{
			sum = sum + m[i][j];
			sum1[k] = sum;
		}
		k++;
	}
	for(i=0;i<a;i++)
	{
		sum = 0;
		for(j=0;j<a;j++)
		{
			sum = sum + m[j][i];
			sum1[k] = sum;
		}
		k++;
	}
	sum = 0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i-j==0)
			{
				sum = sum + m[i][j];
			}
		}
	}
	sum1[k] = sum;
	k++;
	sum = 0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i+j==a-1)
			{
				sum = sum + m[i][j];
			}
		}
	}
	sum1[k] = sum;
	count = 0;
	temp = sum1[0];
	for(i=0;i<a*2+2;i++)
	{
		if(temp==sum1[i])
		{
			count++;
		}
	}
	if(count==a*2+2)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
}
