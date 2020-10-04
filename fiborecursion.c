# include<stdio.h>
int fibo(int);
void main()
{
	int n,f;
	printf(" enter the number");
	scanf("%d",&n);
	f=fibo(n);
	printf("%d",f);
}
int fibo(int n)
{
	if(n==0)
	return n;
	else if( n==1)
	return n ;
	else
	return (fibo(n-1)+fibo(n -2));
}
