# include<stdio.h>
int digit(int);
void main()
{
	int n,c;
	printf("\n enter the number");
	scanf("%d",&n);
	c=digit(n);
	printf("%d",c);
}
int digit(int n)
{
	int i;
	if(n!=0)
	{
		i++;
		return i+digit(n);
	}
	else
	return 0;
}
