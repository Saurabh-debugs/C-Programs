# include<stdio.h>
float div(int,int);
void main()
{
	int a,b;
	float c;
	printf("\n enter the value of a,b");
	scanf("%d%d",&a,&b);
	c=div(a,b);
	printf("%d",c);
}
  float div(int a,int b)
  {
  	if(a<b)
  	{
  		return 0;
	  }
	else
	return 1+div(a-b,b);
  }
