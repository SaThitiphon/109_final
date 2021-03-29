#include <stdio.h>
int main()
{
	int a,b,c,count1,count2,count3,sum,temp,k;
	scanf("%d %d %d",&a,&b,&c);
	int m[a][a],n[b][b],o[c][c],i,j,sum1[a*2+2],sum2[b*2+2],sum3[c*2+2];
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&o[i][j]);
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
	count1 = 0;
	temp = sum1[0];
	for(i=0;i<a*2+2;i++)
	{
		if(temp==sum1[i])
		{
			count1++;
		}
	}
	k = 0;
	for(i=0;i<b;i++)
	{
		sum = 0;
		for(j=0;j<b;j++)
		{
			sum = sum + n[i][j];
			sum2[k] = sum;
		}
		k++;
	}
	for(i=0;i<b;i++)
	{
		sum = 0;
		for(j=0;j<b;j++)
		{
			sum = sum + n[j][i];
			sum2[k] = sum;
		}
		k++;
	}
	sum = 0;
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i-j==0)
			{
				sum = sum + n[i][j];
			}
		}
	}
	sum2[k] = sum;
	k++;
	sum = 0;
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i+j==a-1)
			{
				sum = sum + n[i][j];
			}
		}
	}
	sum2[k] = sum;
	count2 = 0;
	temp = sum2[0];
	for(i=0;i<b*2+2;i++)
	{
		if(temp==sum2[i])
		{
			count2++;
		}
	}
	k = 0;
	for(i=0;i<c;i++)
	{
		sum = 0;
		for(j=0;j<c;j++)
		{
			sum = sum + o[i][j];
			sum3[k] = sum;
		}
		k++;
	}
	for(i=0;i<c;i++)
	{
		sum = 0;
		for(j=0;j<c;j++)
		{
			sum = sum + o[j][i];
			sum3[k] = sum;
		}
		k++;
	}
	sum = 0;
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i-j==0)
			{
				sum = sum + o[i][j];
			}
		}
	}
	sum3[k] = sum;
	k++;
	sum = 0;
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==c-1)
			{
				sum = sum + o[i][j];
			}
		}
	}
	sum3[k] = sum;
	count3 = 0;
	temp = sum3[0];
	for(i=0;i<c*2+2;i++)
	{
		if(temp==sum3[i])
		{
			count3++;
		}
	}
	if(count1==a*2+2)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	printf("\n");
	if(count2==b*2+2)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	printf("\n");
	if(count3==c*2+2)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
}
