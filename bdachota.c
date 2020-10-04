# include<stdio.h>
# include<conio.h>
void main()
{
	int x,y;
	printf(" \n Enter the value of x,y");
	scanf("%d%d",&x,&y);
	if(x>0&&y>0)
	{
		printf(" \n point lie in 1st quardant");
	}
	else if(x<0&&y>0)
	{
		printf("\n point lie on 2nd quardant");
	}
	else if(x<0&&y<0)
	{
		printf(" \n point lie on third quardant");
	}
else
{
	printf(" point lie on 4th quardant");
	}
}
