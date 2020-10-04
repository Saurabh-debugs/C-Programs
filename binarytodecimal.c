// program to convert binary to decimal .....
# include<stdio.h>
# include<math.h>
void main()
{ 
	long int n;
	int j,s=0,i=0,t,u;
	printf("\n enter the number");
	scanf("%ld",&n);
     while(n!=0)
	{
		u=n%10;
		t=pow(2,i);
		s=s+(u*t);
		i++;
        n=n/10;
	}
	printf("%d",s);
}
