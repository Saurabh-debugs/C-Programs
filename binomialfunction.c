# include<stdio.h>
# include<conio.h> 
# include<math.h>
int binomial(int ,int);
int fact(int );
void main()
{
	int n,r,f;
	printf(" enter the value of n,r");
	scanf("%d%d",&n,&r);
	f=binomial(n,r);
	printf("\n binomial is %d",f);
}
  int binomial(int n,int r)
{
	int a,b,c,bin;
	a=fact(n);
	b=fact(r);
	c=fact(n-r);
	bin=a/(b*c);
	return bin;
}
int fact(int x)
{
	int i,fa;
	for(i=0;i<x;i++)
	{
		fa=x*i;
				return fa;
	}
}  
