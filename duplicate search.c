#include<stdio.h>
int getleft(int a[],int l,int r,int key)
{
	int m;
	while(r-l > 1)
	{
		m=l+(r-l)/2;
		if (a[m] >= key)
			r=m;
		else
			l=m;
	}
	return r;
}
int getright(int a[],int l,int r,int key)
{
	int m;
	while(r-l > 1)
	{
		m=l+(r-l)/2;
		if(a[m] <= key)
			l=m;
		else	
			r=m;
	}
	return l ;
}
int count(int a[],int size,int key)
{
	int left=getleft(a,-1,size-1,key);
	int right=getright(a,0,size,key);
	return (a[left]==key && a[right]==key)?(right-left+1):0;
}
main()
{
	int n,key;
	printf("no of eles  ");
	scanf("%d",&n);
	int a[n],i;
	printf("\nenter eles\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter ele to search  ");
	scanf("%d",&key);
	printf("\nans is %d",count(a,n,key));	
}
