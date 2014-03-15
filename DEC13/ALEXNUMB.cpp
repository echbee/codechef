#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	short t;
	scanf("%hd",&t);
	for(;t>0;t--)
	{
		int n;
		scanf("%d",&n);
		long int *arr = new long int[n];
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&arr[i]);
		}
		/*sort(arr,arr+n);
		printf("\nSorted array is :\n");
		for(int i=0;i<n;i++)
		{
			printf("%ld ",arr[i]);
		} */
		long int ans;
		ans = (n*(n-1))/2;
		printf("%ld\n",ans);
		delete[] arr;
	}
	getchar();
	return 0;
}
