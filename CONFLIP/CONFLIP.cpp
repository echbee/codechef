#include<stdio.h>

int main()
{
	short t;
	int g;
	short i,q;
	int count=0;
	long long n;
	short even_odd=1;
	scanf("%hd",&t);
	while(t-->0)
	{
		scanf("%d",&g);
		while(g-->0)
		{
			scanf("%hd %lld %hd",&i,&n,&q);
			even_odd=((n%2)==0) ? 1 : 2 ;
			for(int p=1;p<=n;p++)
			{
				if(even_odd==1)
				{
					if(i==q)
					{
						count++;
					}
					even_odd=2;
				}
				else
				{
					if(i!=q)
					{
						count++;
					}
					even_odd=1;
				}

			}
		}
	}
	return 0;
}
