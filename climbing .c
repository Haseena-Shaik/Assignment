#include<stdio.h>
int main()
{
	int n,m,i,j,c=1,flag=1;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	int A[m];
	for(i=1;i<=m;i++)
		scanf("%d",&A[i]);
		b[1]=a[1];
		i=2;
	while(i<=n)
	{
		if(b[c]==a[i])
			i++;
		else if(a[i]<b[c])
		{
			c++;
			b[c]=a[i];
			i++;
		}
		else
			flag=0;
		
	}
	if(flag==1)
	{

	j=1;
	i=c;
	while(i>=1)
	{
		if(b[i] > A[j])
		{
			printf("%d\n",i+1);
			i--;
			j++;
		}
		else if(b[i]==A[j])
		{
			printf("%d\n",i);
			j++;
			i--;
		}
		else
		{
//			printf("%d\n",i-1);
			i--;
//			j++;
		}
	}
	if(j==m && i==0)
		printf("%d\n",i+1);

}
return 0;
}

