#include <stdio.h>
int main()
{
	int n,c,k,i,m;
	scanf("%d %d",&n,&c);
	for(i=n;i<=2*n;i++)
	{
		m = n % 10;
		if(m==c)
		{
			printf("%d",i);
			break;
		}
	}
}
