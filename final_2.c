#include <stdio.h>
int main()
{
	int n,j,i;
	scanf("%d",&n);
	int a[n][2];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[i][1]++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ",a[i][j])
			}
			printf("\n");
		}
	}
	
}
