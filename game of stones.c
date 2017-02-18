#include<stdio.h>
int main()
{
	int t,n,w;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		(n%7)<2 ? (w=2):(w=1);
	
	if(w==2)
		printf("Second\n");
	if(w==1)
		printf("First\n");
	}
	return 0;
	
}
