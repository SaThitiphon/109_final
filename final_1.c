#include <stdio.h>
int main()
{
	int n,c,k,m,o;
	scanf("%d %d",&n,&c);
	for(k=n;k<=100*n;k++)
	{
		m = k % 10;
		o = n / 10;
		if(n%10!=9)
		{
			if(o==c)
			{
				k++;
				break;
			}
		}
		if(m==c&&k>n)
		{
			break;
		}
	}
	printf("%d",k);
}
