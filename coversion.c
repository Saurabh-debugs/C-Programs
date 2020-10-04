// program to convert both coversion using switch .....
# include<stdio.h>
# include<math.h>
void main()
{
	long int y;
	int x,n,a[30],i=0,r,j,s=0,k=0,t,u;
	printf("\n 1 for covert decimal to binary \n 2 for covert binary to decinal \n 3 for exit");
	scanf("%d",&x);
    switch(x)
    {
    	// for decimal to binary ...
		case 1:
    	
	printf("\n enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%2;
		i++;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
	{
	printf("%d",a[j]);
}
     break;
     	// for binary to decimal ....
		 case 2:
	printf("\n enter the number");
	scanf("%ld",&y);
     while(y!=0)
	{
		u=y%10;
		t=pow(2,k);
		s=s+(u*t);
		k++;
        y=y/10;
	}
	printf("%d",s);
	break;
		case 3:
			exit(0);
	}
     
}
