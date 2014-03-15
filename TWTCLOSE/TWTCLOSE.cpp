#include<iostream>
#include<stdio.h>
#include<string.h>

int main()
{
	int n,k,temp,count=0;
	char str[]="random";
	scanf("%d %d",&n,&k);
	int arr[n];

	for(int i=0;i<n;i++)
		arr[i]=0;

	while(k-->0)
	{
		scanf("%s",str);
		if(strcmp(str,"CLOSEALL")==0)
		{
			for(int i=0;i<n;i++)
				arr[i]=0;
			count=0;
		}
		else
		{
			scanf("%d",&temp);
			if(arr[temp]==1)
			{
				arr[temp]=0;
				count--;
			}
			else
			{
				arr[temp]=1;
				count++;
			}
		}
		printf("%d",count);
		if(k!=0)
			printf("\n");
	}

	return 0;
}
