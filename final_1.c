#include <stdio.h>
int main()
{
	int n,c,k,m;
	scanf("%d %d",&n,&c);
	for(k=n;k<=2*n;k++)
	{
		m = k % 10;
		if(m==c)
		{
			printf("%d",k);
			break;
		}
	}
}
