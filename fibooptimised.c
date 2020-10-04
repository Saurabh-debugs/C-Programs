# include<stdio.h>
int fibo(int,int qb[]);
void main()
{
	int n,f,i;
	int qb[n+1];
	printf(" enter the number");
	scanf("%d",&n);
/*	for(i=0;i<=n;i++)
	{
		qb[i] = 0;
	}    */
	f=fibo(n,qb);
	printf("%d",f);
}
 int fibo(int n,int qb[]){
 int fib1,fib2,fibn;
 
    if(n==0 && n==1)
	return n;
	if(qb[n]!=0)
	{
		return qb[n];
	}
	else {	
	//	printf("Hello \n");
//	return (fibo(n-1)+fibo(n -2));   
       fib1 = fibo(n-1,qb);
	   fib2 = fibo(n-2,qb);
	   fibn = fib1 + fib2;
	   qb[n] = fibn;
	   return fibn;
		}
}
