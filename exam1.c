# include<stdio.h>
void main()
{
	int n,i,r=1,s;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		s=n%10;
		r=s*r;
		n=n/10;
	}
	printf("%d",r);
}
