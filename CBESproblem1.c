# include<stdio.h>
int main()
{
	int a[20],i,n,b[20],c=0,sum=0,j;
	printf(" enter the n");
	scanf("%d",&n);
	printf("\n enter the numbers");
	for(i=0;i<n-1;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		b[i-1]=i;
		sum=sum+b[i-1];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(b[i]==a[j])
			c=c+b[i];
	}  
}
    printf("\nmissing number is: %d",sum-c);
}
