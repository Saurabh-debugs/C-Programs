# include<stdio.h>
int main()
{
	long long int n;
	printf("Enter the value of n");
	scanf("%lld",&n);
	printf("%lld",n);
	printf(" ");
	while(n!=1)
	{
	  if(n%2==0)
	  	n=n/2;
	  	else
	  	n=(n*3)+1;
	  	printf("%lld",n);
	  	printf(" ");
	}
}
