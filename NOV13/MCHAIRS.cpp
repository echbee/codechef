#include<iostream>
#include<stdio.h>

using namespace std;

void func(long long int n, long long int &ans , long long int k)
{
	if(n==k)
		return;
	else
	{
		if(2*k<=n)
		{
			ans = (ans*ans)%1000000007;
			func(n,ans,2*k);
		}
		else
		{
			long long int temp = 2;
			func(n-k,temp,1);
			ans = (ans*temp)%1000000007;
		}
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	long long int n;

	for(;t>0;t--)
	{
		scanf("%lld",&n);
		long long int ans = 2;
		func(n,ans,1);
		ans--;
		printf("%lld\n",ans);
	}
	return 0;
}
