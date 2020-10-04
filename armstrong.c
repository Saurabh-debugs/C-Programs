# include<stdio.h>
void main()
{
	int n,i,r,sum=0,j=0,p,a;
 	printf("\n enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
    	r=i%10;
    	j=j+1;
        sum=sum+(r*r*r);
		//printf("%d",r);
	}
	printf("\n sum is %d",sum);
     printf("\n no of digit is%d",j);
   /* if(j>3)
    {
      a=j-3;
      sum=sum+pow(r,a);
      printf("\n%d",sum);
	*/
	if(sum==n)
    {
    	printf("\n given number is armstrong");
	}
	else
	printf("\n no is not armstrong");
} 
