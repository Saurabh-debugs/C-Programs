// wap to print all even number between range a,b
# include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n Enter the range ");
	scanf("%d%d",&a,&b);
	for(c=a;c<=b;c++)
	{
		if(c%2==0)
		{
			printf("\n%d",c);
		}
	}
}

