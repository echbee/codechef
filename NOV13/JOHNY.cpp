#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int t,n,k;
	scanf("%d",&t);

	for(;t>0;t--)
	{
		scanf("%d",&n);
		int *arr = new int[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		scanf("%d",&k);
		int ans = 0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<=arr[k-1])
				ans++;
		}
		printf("%d\n",ans);
		delete [] arr;
	}
	return 0;
}
