# include<stdio.h>  
void main()
{
	int a=0,d=0,b=1,i,n,c;
	printf("\n enter the number ");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\n%d",a);
	}
	else if(n==2)
	{
		printf("\n%d\n%d",a,b);
	}
	else
	{
		printf("\n%d\n%d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	}
	
}
