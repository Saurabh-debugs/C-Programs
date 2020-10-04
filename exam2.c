 # include<stdio.h>
void main()
{
	int a,b,c,d,e=0,f;
	printf(" enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			e=a;
			printf("\n a is greater ");
		}
		else
		e=c;
		printf("\n c is greater");
	}
	else if(b>c)
	{
		e=b;
		printf("\n b is greter");
	}
	else
{	e=c;
	printf("\n c is greater");
}
if(a<b)
	{
		if(a<c)
		{
			f=a;
			printf("\n a is smaller ");
		}
		else
		f=c;
		printf("\n c is smaller");
	}
	else if(b<c)
	{
		f=b;
		printf("\n b is smaller");
	}
	else
{	f=c;
	printf("\n c is smaller");
}
   if(e==a)
   g=a;
   else if(e==b)
   g=b;
   else
   g=c;
   if(f==a)
   h=a;
   else if(f==b)
   h=b;
   else
   h=c;
} 
