# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
int add(int,int);
void main()
{
	int a,b,c,x=1;
	while(x==1)
	{
	printf("enter the value  of a,b");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("sum of a,b is %d",c);
	x++;
	printf("\n ***** to continoue please enter 1 ******");
scanf("%d",&x);
}

}

int add(int d,int e)
{
	int f;
	f=d+e;
	return f;
}
