# include<stdio.h>
# include<math.h>
int armstrong(int );
void main()
{
  int n,a;
  printf(" enter the number");
  scanf("%d",&n);
  a=armstrong(n);
  if(a==n)
  printf("\n number is armstrong");
  else
  printf("\n number is not armstrong");	
}
int armstrong(int b)
{
 int i,sum=0,c,t,r;
   // t=digit(c);
	for(i=b;i>0;i=i/10)
	{
		r=i%10;
		sum=sum+(r*r*r);
	}
	return sum;

} 
/*int digit(int c)
{
	int i,j=0,r;
	for(i=c;i>0;i=i/10)
	{
		r=i%10;
		j=j+1;
	}
	return j;
}*/
