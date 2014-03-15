#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t,n,*arr,num;
	scanf("%d", &t);
	while(t-->0)
	{
		num=1;
		scanf("%d", &n);
		arr=new int[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &arr[i]);
		}

		for(int i=1;i<n;i++)
		{
			if(arr[i]>=arr[i-1])
			{
				arr[i]=arr[i-1];
			}
			else
			{
				num++;
			}
		}
		printf("%d", num);
		if(t!=0)
			printf("\n");
	}
	return 0;
}
