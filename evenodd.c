# include<stdio.h>
# include<conio.h>
void main()
{
	int a,b,s1=0,s2=0,c;
	printf("\n enter the value of a,b");
	scanf("%d%d",&a,&b);
	for(c=a;c<=b;c++)
	{
		if(c%2==0)
		{
	  s1=s1+c;
		}
		else
		s2=s2+c;
	}
 printf("\n%d\n%d",s1,s2);
}
