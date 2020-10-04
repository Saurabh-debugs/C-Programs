# include<stdio.h>
void main()
{
	int n,a,r,s=0,b,c,e;
	printf(" enter the number");
	scanf("%d",&n);
	a=n%10;
	e=strlen(n);
	printf("%d",e);
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
  b=s%10;
  c=a+b;
  printf("sum is %d",c);
}

